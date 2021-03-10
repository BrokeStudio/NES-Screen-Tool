//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitInputNumber.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormInputNumber *FormInputNumber;
//---------------------------------------------------------------------------
__fastcall TFormInputNumber::TFormInputNumber(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormInputNumber::FormCreate(TObject *Sender)
{
	Number=64;
	Confirm=false;
}
//---------------------------------------------------------------------------
void __fastcall TFormInputNumber::EditNumberKeyPress(TObject *Sender, char &Key)
{
	if((Key>='0'&&Key<='9')||(Key>='A'&&Key<='F')||(Key>='a'&&Key<='f')||Key=='-'||Key=='$'||Key==VK_DELETE||Key==VK_BACK) return;

	if(Key==VK_ESCAPE)
	{
		Confirm=false;
		Close();
	}

	if(Key==VK_RETURN)
	{
       SpeedButtonOKClick(Sender);
    }

	Key=0;
}
//---------------------------------------------------------------------------
void __fastcall TFormInputNumber::FormShow(TObject *Sender)
{
	EditNumber->Text=IntToStr(Number);
}
//---------------------------------------------------------------------------
void __fastcall TFormInputNumber::SpeedButtonOKClick(TObject *Sender)
{
	Number=StrToInt(EditNumber->Text);
	if(Number<1) Number=1;
	if(Number>256) Number=256;
	
	Confirm=true;
	Close();
}
//---------------------------------------------------------------------------
