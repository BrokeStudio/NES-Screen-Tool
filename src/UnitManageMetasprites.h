//---------------------------------------------------------------------------

#ifndef UnitManageMetaspritesH
#define UnitManageMetaspritesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormManageMetasprites : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBoxSprites;
	TSpeedButton *SpeedButtonMoveUp;
	TSpeedButton *SpeedButtonMoveDown;
	TSpeedButton *SpeedButtonInsert;
	TSpeedButton *SpeedButtonRemove;
	TSpeedButton *SpeedButtonDuplicate;
	TImage *ImageMetaSprite;
	TSpeedButton *SpeedButtonCopy;
	TSpeedButton *SpeedButtonPaste;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ListBoxSpritesClick(TObject *Sender);
	void __fastcall SpeedButtonInsertClick(TObject *Sender);
	void __fastcall SpeedButtonRemoveClick(TObject *Sender);
	void __fastcall SpeedButtonMoveUpClick(TObject *Sender);
	void __fastcall SpeedButtonMoveDownClick(TObject *Sender);
	void __fastcall SpeedButtonDuplicateClick(TObject *Sender);
	void __fastcall SpeedButtonCopyClick(TObject *Sender);
	void __fastcall SpeedButtonPasteClick(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall TFormManageMetasprites(TComponent* Owner);

	void __fastcall Update(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormManageMetasprites *FormManageMetasprites;
//---------------------------------------------------------------------------
#endif
