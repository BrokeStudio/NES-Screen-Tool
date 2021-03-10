object FormMetaspriteOffset: TFormMetaspriteOffset
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Add X/Y offset'
  ClientHeight = 162
  ClientWidth = 241
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 241
    Height = 162
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 243
    ExplicitHeight = 216
    object LabelX: TLabel
      Left = 60
      Top = 27
      Width = 69
      Height = 13
      Alignment = taRightJustify
      Caption = 'X (-128..128):'
      Layout = tlBottom
    end
    object LabelY: TLabel
      Left = 60
      Top = 61
      Width = 69
      Height = 13
      Alignment = taRightJustify
      Caption = 'Y (-128..128):'
    end
    object ButtonOk: TButton
      Left = 77
      Top = 127
      Width = 75
      Height = 25
      Caption = 'OK'
      TabOrder = 0
      OnClick = ButtonOkClick
    end
    object ButtonCancel: TButton
      Left = 158
      Top = 126
      Width = 75
      Height = 25
      Caption = 'Cancel'
      TabOrder = 1
      OnClick = ButtonCancelClick
    end
    object EditX: TEdit
      Left = 135
      Top = 24
      Width = 42
      Height = 21
      MaxLength = 4
      TabOrder = 2
      Text = '0'
      OnChange = EditXChange
      OnKeyPress = EditXKeyPress
      OnMouseDown = EditXMouseDown
    end
    object EditY: TEdit
      Left = 135
      Top = 58
      Width = 42
      Height = 21
      MaxLength = 4
      TabOrder = 3
      Text = '0'
      OnChange = EditXChange
      OnKeyPress = EditXKeyPress
      OnMouseDown = EditXMouseDown
    end
    object RadioGroup1: TRadioGroup
      Left = 3
      Top = 80
      Width = 235
      Height = 41
      Caption = 'RadioGroup1'
      TabOrder = 4
      Visible = False
    end
    object RadioButtonSprite: TRadioButton
      Left = 117
      Top = 94
      Width = 114
      Height = 17
      Caption = 'Current metasprite'
      TabOrder = 5
    end
    object RadioButtonBank: TRadioButton
      Left = 12
      Top = 94
      Width = 85
      Height = 17
      Caption = 'Whole bank'
      Checked = True
      TabOrder = 6
      TabStop = True
    end
  end
end
