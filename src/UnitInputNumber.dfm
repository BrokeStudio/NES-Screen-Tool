object FormInputNumber: TFormInputNumber
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'How many tiles?'
  ClientHeight = 40
  ClientWidth = 159
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButtonOK: TSpeedButton
    Left = 87
    Top = 8
    Width = 64
    Height = 22
    Caption = 'OK'
    OnClick = SpeedButtonOKClick
  end
  object EditNumber: TEdit
    Left = 8
    Top = 8
    Width = 65
    Height = 21
    TabOrder = 0
    Text = '64'
    OnKeyPress = EditNumberKeyPress
  end
end
