object FormName: TFormName
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Metasprite name'
  ClientHeight = 36
  ClientWidth = 209
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object EditName: TEdit
    Left = 8
    Top = 8
    Width = 193
    Height = 21
    TabOrder = 0
    Text = 'metasprite'
    OnKeyPress = EditNameKeyPress
  end
end
