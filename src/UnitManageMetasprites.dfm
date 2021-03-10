object FormManageMetasprites: TFormManageMetasprites
  Left = 0
  Top = 0
  BorderStyle = bsToolWindow
  Caption = 'Manage metasprites'
  ClientHeight = 451
  ClientWidth = 387
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  OnKeyDown = FormKeyDown
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButtonMoveUp: TSpeedButton
    Left = 247
    Top = 64
    Width = 65
    Height = 22
    Caption = 'Move Up'
    OnClick = SpeedButtonMoveUpClick
  end
  object SpeedButtonMoveDown: TSpeedButton
    Left = 318
    Top = 64
    Width = 65
    Height = 22
    Caption = 'Move Down'
    OnClick = SpeedButtonMoveDownClick
  end
  object SpeedButtonInsert: TSpeedButton
    Left = 247
    Top = 8
    Width = 65
    Height = 22
    Caption = 'Insert'
    OnClick = SpeedButtonInsertClick
  end
  object SpeedButtonRemove: TSpeedButton
    Left = 247
    Top = 92
    Width = 65
    Height = 22
    Caption = 'Remove'
    OnClick = SpeedButtonRemoveClick
  end
  object SpeedButtonDuplicate: TSpeedButton
    Left = 318
    Top = 8
    Width = 65
    Height = 22
    Caption = 'Duplicate'
    OnClick = SpeedButtonDuplicateClick
  end
  object ImageMetaSprite: TImage
    Left = 247
    Top = 179
    Width = 128
    Height = 128
  end
  object SpeedButtonCopy: TSpeedButton
    Left = 247
    Top = 36
    Width = 65
    Height = 22
    Caption = 'Copy'
    OnClick = SpeedButtonCopyClick
  end
  object SpeedButtonPaste: TSpeedButton
    Left = 318
    Top = 36
    Width = 65
    Height = 22
    Caption = 'Paste'
    OnClick = SpeedButtonPasteClick
  end
  object ListBoxSprites: TListBox
    Left = 8
    Top = 10
    Width = 233
    Height = 433
    ExtendedSelect = False
    ItemHeight = 13
    TabOrder = 0
    OnClick = ListBoxSpritesClick
    OnKeyDown = FormKeyDown
  end
end
