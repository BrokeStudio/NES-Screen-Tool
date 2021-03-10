object FormSwapColors: TFormSwapColors
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Swap colors'
  ClientHeight = 200
  ClientWidth = 298
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  Scaled = False
  OnCreate = FormCreate
  OnPaint = FormPaint
  PixelsPerInch = 96
  TextHeight = 16
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 298
    Height = 200
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 276
    object Label1: TLabel
      Left = 16
      Top = 27
      Width = 38
      Height = 16
      Caption = 'Order:'
    end
    object RadioButton4K: TRadioButton
      Left = 16
      Top = 65
      Width = 113
      Height = 17
      Caption = 'Current 4K'
      Checked = True
      TabOrder = 5
      TabStop = True
      OnClick = RadioButton4KClick
    end
    object RadioButton8K: TRadioButton
      Left = 16
      Top = 88
      Width = 113
      Height = 17
      Caption = 'Whole 8K'
      TabOrder = 6
      OnClick = RadioButton4KClick
    end
    object RadioButtonSelection: TRadioButton
      Left = 16
      Top = 111
      Width = 177
      Height = 17
      Caption = 'Selected tiles in current 4K'
      TabOrder = 7
      OnClick = RadioButton4KClick
    end
    object CheckBoxPal: TCheckBox
      Left = 16
      Top = 133
      Width = 161
      Height = 17
      Caption = 'Swap colors in palettes'
      TabOrder = 8
      OnClick = CheckBoxPalClick
    end
    object ButtonSwap: TButton
      Left = 70
      Top = 161
      Width = 75
      Height = 25
      Caption = 'Swap'
      TabOrder = 9
      OnClick = ButtonSwapClick
    end
    object ButtonCancel: TButton
      Left = 162
      Top = 161
      Width = 75
      Height = 25
      Caption = 'Cancel'
      TabOrder = 10
      OnClick = ButtonCancelClick
    end
    object Button1: TButton
      Left = 60
      Top = 24
      Width = 25
      Height = 25
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Tag = 1
      Left = 91
      Top = 24
      Width = 25
      Height = 25
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button3: TButton
      Tag = 2
      Left = 122
      Top = 24
      Width = 25
      Height = 25
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button4: TButton
      Tag = 3
      Left = 153
      Top = 24
      Width = 25
      Height = 25
      TabOrder = 3
      OnClick = Button1Click
    end
    object ButtonReset: TButton
      Left = 216
      Top = 24
      Width = 65
      Height = 25
      Caption = 'Reset'
      TabOrder = 4
      OnClick = ButtonResetClick
    end
    object ButtonDarker: TButton
      Left = 216
      Top = 55
      Width = 65
      Height = 25
      Hint = 
        'This swap setting will shift color indexes to the left, making g' +
        'raphics darker'
      Caption = 'Darker'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 11
      OnClick = ButtonDarkerClick
    end
    object ButtonBrighter: TButton
      Left = 216
      Top = 86
      Width = 65
      Height = 25
      Hint = 
        'This swap setting will shift color indexes to the right, making ' +
        'graphics brighter'
      Caption = 'Brighter'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 12
      OnClick = ButtonBrighterClick
    end
  end
end
