object Form1: TForm1
  Left = 481
  Top = 308
  Width = 572
  Height = 300
  Caption = 'PingPong by Grzesiek'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Visible = True
  OnClick = Button1Click
  PixelsPerInch = 96
  TextHeight = 14
  object Label1: TLabel
    Left = 16
    Top = 8
    Width = 125
    Height = 20
    Caption = 'Witaj w grze PingPong!'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 48
    Width = 282
    Height = 18
    Caption = 'Lewy gracz startuje wciskajac klawisze A oraz Z'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 64
    Width = 314
    Height = 18
    Caption = 'Prawy gracz startuje wciskaj'#261'c strza'#322'ki do g'#243'ry i w d'#243#322
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 96
    Width = 152
    Height = 18
    Caption = 'Dla urozmaicenia zabawy:'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 112
    Width = 532
    Height = 18
    Caption = 
      'Kiedy odbijesz pi'#322'ke na srodku paletki, w'#243'wczas zmienisz jej k'#261't' +
      ' odbicia i pi'#322'ka przyspieszy'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 128
    Width = 327
    Height = 18
    Caption = 'Im d'#322'u'#380'ej odbijasz, tym pi'#322'ka szybciej przemieszcza sie.'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 8
    Top = 144
    Width = 210
    Height = 18
    Caption = 'Mo'#380'esz dowolnie zmianiac pole gry.'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = '@Arial Unicode MS'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 8
    Top = 192
    Width = 89
    Height = 20
    Caption = 'Mi'#322'ej zabawy!'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = '@Arial Unicode MS'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object Button1: TButton
    Left = 224
    Top = 200
    Width = 113
    Height = 41
    Caption = 'OK'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
end
