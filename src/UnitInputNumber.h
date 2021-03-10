//---------------------------------------------------------------------------

#ifndef UnitInputNumberH
#define UnitInputNumberH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TFormInputNumber : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditNumber;
	TSpeedButton *SpeedButtonOK;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall EditNumberKeyPress(TObject *Sender, char &Key);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SpeedButtonOKClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormInputNumber(TComponent* Owner);

	int Number;
	bool Confirm;
};
//---------------------------------------------------------------------------
extern PACKAGE TFormInputNumber *FormInputNumber;
//---------------------------------------------------------------------------
#endif
