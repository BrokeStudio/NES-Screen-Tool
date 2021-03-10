//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
#include "UnitManageMetasprites.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormManageMetasprites *FormManageMetasprites;


extern int metaSpriteActive;
extern unsigned char metaSprites[];


void __fastcall TFormManageMetasprites::Update(void)
{
	AnsiString str;
	int i,j,cnt;

	ListBoxSprites->ItemIndex=metaSpriteActive;

	for(i=0;i<256;++i)
	{
		str=IntToStr(i)+": ";

		cnt=0;

		for(j=0;j<64*4;j+=4)
		{
			if(metaSprites[i*64*4+j]<255) ++cnt;
		}

		if(!cnt) str+="empty"; else str+=IntToStr(cnt)+" sprites";

		ListBoxSprites->Items->Strings[i]=str;
	}

	FormMain->DrawMetaSprite(ImageMetaSprite,metaSpriteActive,1,true,false,true);
}


//---------------------------------------------------------------------------
__fastcall TFormManageMetasprites::TFormManageMetasprites(TComponent* Owner)
: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::FormCreate(TObject *Sender)
{
	ImageMetaSprite->Picture=new TPicture();
	ImageMetaSprite->Picture->Bitmap=new Graphics::TBitmap();
	ImageMetaSprite->Picture->Bitmap->PixelFormat=pf24bit;
	ImageMetaSprite->Picture->Bitmap->SetSize(ImageMetaSprite->Width,ImageMetaSprite->Height);

	DoubleBuffered=true;
	ListBoxSprites->DoubleBuffered=true;

	Update();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::FormShow(TObject *Sender)
{
	Update();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::ListBoxSpritesClick(TObject *Sender)
{
	metaSpriteActive=ListBoxSprites->ItemIndex;

	FormMain->UpdateMetaSprite();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::SpeedButtonInsertClick(TObject *Sender)
{
	int i,id;

	FormMain->SetUndo();

	id=ListBoxSprites->ItemIndex;

	for(i=255;i>id;--i)
	{
		memcpy(&metaSprites[i*64*4],&metaSprites[(i-1)*64*4],64*4);
	}

	memset(&metaSprites[id*64*4],255,64*4);

	if(metaSpriteActive<255) ++metaSpriteActive;

	FormMain->UpdateMetaSprite();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::SpeedButtonRemoveClick(TObject *Sender)
{
	int i,id;

	FormMain->SetUndo();
	
	id=ListBoxSprites->ItemIndex;

	for(i=id;i<255;++i)
	{
		memcpy(&metaSprites[i*64*4],&metaSprites[(i+1)*64*4],64*4);
	}

	memset(&metaSprites[255*64*4],255,64*4);

	FormMain->UpdateMetaSprite();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::SpeedButtonMoveUpClick(TObject *Sender)
{
	int i,id;
	unsigned char temp[64*4];

	id=ListBoxSprites->ItemIndex;

	if(id<1) return;

	FormMain->SetUndo();
	
	memcpy(&temp,&metaSprites[(id-1)*64*4],64*4);
	memcpy(&metaSprites[(id-1)*64*4],&metaSprites[id*64*4],64*4);
	memcpy(&metaSprites[id*64*4],&temp,64*4);

	--metaSpriteActive;

	FormMain->UpdateMetaSprite();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::SpeedButtonMoveDownClick(
TObject *Sender)
{
	int i,id;
	unsigned char temp[64*4];

	id=ListBoxSprites->ItemIndex;

	if(id>=255) return;

	FormMain->SetUndo();
	
	memcpy(&temp,&metaSprites[(id+1)*64*4],64*4);
	memcpy(&metaSprites[(id+1)*64*4],&metaSprites[id*64*4],64*4);
	memcpy(&metaSprites[id*64*4],&temp,64*4);

	++metaSpriteActive;

	FormMain->UpdateMetaSprite();
}
//---------------------------------------------------------------------------
void __fastcall TFormManageMetasprites::SpeedButtonDuplicateClick(
      TObject *Sender)
{
	int i,id;

	FormMain->SetUndo();
	
	id=ListBoxSprites->ItemIndex;

	for(i=255;i>id;--i)
	{
		memcpy(&metaSprites[i*64*4],&metaSprites[(i-1)*64*4],64*4);
	}

	if(metaSpriteActive<255) ++metaSpriteActive;

	FormMain->UpdateMetaSprite();
}
//---------------------------------------------------------------------------

void __fastcall TFormManageMetasprites::SpeedButtonCopyClick(TObject *Sender)
{
	FormMain->SpeedButtonMetaSpriteCopyClick(Sender);	
}
//---------------------------------------------------------------------------

void __fastcall TFormManageMetasprites::SpeedButtonPasteClick(TObject *Sender)
{
	FormMain->SpeedButtonMetaSpritePasteClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TFormManageMetasprites::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
	if(!Shift.Contains(ssCtrl))
	{
		if(Key==VK_OEM_4) FormMain->SpeedButtonPrevMetaSpriteClick(Sender);// [
		if(Key==VK_OEM_6) FormMain->SpeedButtonNextMetaSpriteClick(Sender);// ]
	}
}
//---------------------------------------------------------------------------

