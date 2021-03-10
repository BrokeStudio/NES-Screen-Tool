//---------------------------------------------------------------------------

#ifndef UnitMetaspriteOffsetH
#define UnitMetaspriteOffsetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormMetaspriteOffset : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *LabelX;
	TLabel *LabelY;
	TButton *ButtonOk;
	TButton *ButtonCancel;
	TEdit *EditX;
	TEdit *EditY;
	TRadioGroup *RadioGroup1;
	TRadioButton *RadioButtonSprite;
	TRadioButton *RadioButtonBank;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ButtonOkClick(TObject *Sender);
	void __fastcall ButtonCancelClick(TObject *Sender);
	void __fastcall EditXKeyPress(TObject *Sender, char &Key);
	void __fastcall EditXMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
	void __fastcall EditXChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMetaspriteOffset(TComponent* Owner);

	bool MakeOffset;
	bool SelectedOnly;
	int OffsetX;
	int OffsetY;
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMetaspriteOffset *FormMetaspriteOffset;
//---------------------------------------------------------------------------
#endif
