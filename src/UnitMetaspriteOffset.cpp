//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMetaspriteOffset.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMetaspriteOffset *FormMetaspriteOffset;
//---------------------------------------------------------------------------
__fastcall TFormMetaspriteOffset::TFormMetaspriteOffset(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMetaspriteOffset::FormCreate(TObject *Sender)
{
	MakeOffset=false;
	SelectedOnly=false;
	OffsetX=0;
	OffsetY=0;
}
//---------------------------------------------------------------------------
void __fastcall TFormMetaspriteOffset::ButtonOkClick(TObject *Sender)
{
	MakeOffset=true;
	SelectedOnly=RadioButtonSprite->Checked;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormMetaspriteOffset::ButtonCancelClick(TObject *Sender)
{
	MakeOffset=false;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormMetaspriteOffset::EditXKeyPress(TObject *Sender, char &Key)
{
	if((Key>='0'&&Key<='9')||Key=='-'||Key==VK_DELETE||Key==VK_BACK) return;

	if(Key==VK_ESCAPE) ButtonCancelClick(Sender);
	if(Key==VK_RETURN) ButtonOkClick(Sender);

	Key=0;	
}
//---------------------------------------------------------------------------
void __fastcall TFormMetaspriteOffset::EditXMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
	((TEdit*)Sender)->SelectAll();	
}
//---------------------------------------------------------------------------
void __fastcall TFormMetaspriteOffset::EditXChange(TObject *Sender)
{
	TEdit *e;
	char str_in[16],str_out[16];
	unsigned int i;
	int n,c,ptr,pos;
	bool neg,num;

	e=((TEdit*)Sender);

	strcpy(str_in,e->Text.c_str());

	pos=e->SelStart;

	neg=false;
	num=false;

	for(i=0;i<strlen(str_in);++i)
	{
		c=str_in[i];

		if(!c) break;
		if(c=='-') neg=true;
		if(c>='0'&&c<='9') num=true;
	}

	memset(str_out,0,sizeof(str_out));

	ptr=0;

	if(neg) str_out[ptr++]='-';

	for(i=0;i<strlen(str_in);++i)
	{
		c=str_in[i];

		if(!c) break;
		if(c=='-') continue;

		str_out[ptr++]=c;
	}

	if(!num) str_out[ptr]='0';

	e->Text=str_out;
	e->SelStart=pos;

	n=0;

	for(i=0;i<strlen(str_out);++i)
	{
		c=str_out[i];

		if(c>='0'&&c<='9') n=n*10+(c-'0');
	}

	if(neg) n=-n;

	if(Sender==EditX) OffsetX=n;
	if(Sender==EditY) OffsetY=n;
}
//---------------------------------------------------------------------------
