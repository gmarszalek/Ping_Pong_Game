//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//x,y,a,b - przesuniêcia pi³ki w poziomie i pionie
int x=-10;
int y=-8;
int a=14;
int b=8;
int numberOfRreflections=0;
int pointForTheLeftPlayer=0 ;
int pointForTheRightPlayer=0;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
 AnsiString strHello = "Witaj w grze PingPong.";
   AnsiString strLeftPlayer = "Lewy gracz steruje wciskaj¹c klawisze A oraz Z.";
   AnsiString strRightPlayer = "Prawy gracz steruje wciskaj¹c strza³ki do góry i w dó³.";
   AnsiString strInfo0 = "Dla urozmaicenia zabawy:";
   AnsiString strInfo1 = "Kiedy odbijesz pi³kê na œrodku paletki, wówczas zmienisz jej k¹t odbicia i pi³ka przyœpieszy.";
   AnsiString strInfo2 = "Im d³u¿ej odbijasz, tym pi³ka szybciej przemieszcza siê.";
   AnsiString strInfo3 = "Mo¿esz dowolnie zmieniaæ pole gry";
   AnsiString strFinal = "Mi³ej zabawy!";
   ShowMessage(strHello+sLineBreak+sLineBreak+strLeftPlayer+sLineBreak+strRightPlayer+sLineBreak+sLineBreak+
               strInfo1+sLineBreak+strInfo2+sLineBreak+strInfo3+sLineBreak+strFinal);


}


//---------------------------------------------------------------------------

void __fastcall TForm2::Timer_ballTimer(TObject *Sender)
{
   ball->Left +=x;
   ball->Top +=y;

   Timer_ball->Enabled = true;
   Button1->Visible = false;
   Label1 -> Visible = false;
   Button2 -> Visible = false;
   ball -> Enabled = true;

   //skucha i odbicie z lewej

   if ( ball -> Left +5 < background -> Left)
   {
   Timer_ball -> Enabled = false;
   ball -> Visible = false;
   Label2->Caption="Punkt dla gracza prawego >";
   Label2 -> Visible = true;
   Button3 -> Visible = true;
   Button2 -> Visible = true;
   Label5 ->Caption ="Ilosc odbic: "+ IntToStr(numberOfRreflections);
   Label5 -> Visible = true;
   pointForTheRightPlayer++;
   Label3->Caption= IntToStr(pointForTheLeftPlayer)+":"+IntToStr(pointForTheRightPlayer);
   Label3->Visible=true;

   } else if ( ball -> Top > leftPaddle -> Top - ball -> Height/2 &&
               ball -> Top < leftPaddle -> Top + leftPaddle -> Height &&
               ball -> Left < leftPaddle -> Left + leftPaddle -> Width)
                  {
                   if(x<0) x=-x;
                   numberOfRreflections++;
                   if(Timer_ball->Interval >1) Timer_ball->Interval--;

                  //odbicie pi³ki na srodku paletki lewej
                  if( ball -> Top  > leftPaddle -> Top + leftPaddle->Height/4 &&
                      ball -> Top < leftPaddle -> Top + 150)
                      {
                        ball->Left +=a;
                        ball->Top +=b;
                        if(Timer_ball->Interval >1) Timer_ball->Interval--;
                      }
                  }

   //skucha i odbicie od prawej
   if(ball ->Left + ball->Width+5 >= background->Width)
   {
    Timer_ball -> Enabled = false;
    Button3->Visible=true;
    Button2 -> Visible = true;
    ball -> Visible = false;
    Label2 -> Caption = "< Punkt dla gracza lewego";
    Label2 -> Visible = true;
    Label5 ->Caption ="Ilosc odbic: "+ IntToStr(numberOfRreflections);
    Label5->Visible = true;
    pointForTheLeftPlayer++;
    Label3->Caption= IntToStr(pointForTheLeftPlayer)+":"+IntToStr(pointForTheRightPlayer);
    Label3->Visible=true;
   } else if ( ball -> Top > rightPaddle -> Top - ball -> Height/2 &&
               ball -> Top < rightPaddle -> Top + rightPaddle -> Height + ball->Height/2 &&
               ball -> Left+ ball->Width  >= rightPaddle -> Left)
               {
                if(x>0) x = -x;
                 numberOfRreflections++;
                 if(Timer_ball->Interval >1) Timer_ball->Interval--;

               //odbicie na srdku paletki prawej
               if ( ball -> Top  > leftPaddle -> Top + leftPaddle->Height/4 &&
                      ball -> Top < leftPaddle -> Top +150)

                      {
                        ball->Left -=a;
                        ball->Top +=b;
                        if(Timer_ball->Interval >1) Timer_ball->Interval--;
                      }
               }

   //odbicie od górnej sciany
        if(ball -> Top <= 0) y=-y;

   //odbicie od dolnej sciany
        if(ball -> Top + ball -> Height+5 >=  background -> Height) y=-y;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::leftPaddleUpTimer(TObject *Sender)
{
   if(leftPaddle->Top > 10) leftPaddle->Top -= 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::leftPaddleDownTimer(TObject *Sender)
{
   if(leftPaddle->Top+leftPaddle->Height+10 < background->Height) leftPaddle->Top += 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if ( Key == 'A') leftPaddleUp->Enabled = true;
   if ( Key == 'Z') leftPaddleDown->Enabled = true;
   if ( Key == VK_UP) rightPaddleUp->Enabled = true;
   if ( Key == VK_DOWN) rightPaddleDown->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if ( Key == 'A') leftPaddleUp->Enabled = false;
   if ( Key == 'Z') leftPaddleDown->Enabled = false;
   if ( Key == VK_UP) rightPaddleUp->Enabled = false;
   if ( Key == VK_DOWN) rightPaddleDown->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::rightPaddleUpTimer(TObject *Sender)
{
   if(rightPaddle->Top > 10) rightPaddle->Top -= 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::rightPaddleDownTimer(TObject *Sender)
{
   if(rightPaddle->Top+rightPaddle->Height+10 < background->Height) rightPaddle->Top += 10;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender)
{
if(Application->MessageBox(
    "Czy na pewno chcesz zacz¹æ od nowa?","PotwierdŸ",
    MB_YESNO | MB_ICONQUESTION) == IDYES )
     {
    ball->Left = 450;
    ball->Top = 350;
    ball->Visible = true;
    x=-10; y=-8;
    Timer_ball->Enabled=true;
    Label2->Visible=false;
    Button3->Visible=false;
     numberOfRreflections=0;
     pointForTheLeftPlayer=0 ;
     pointForTheRightPlayer=0;
     Label3->Visible=false;
     Label5->Visible=false;
     Timer_ball -> Interval = 20;
     }

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
    ball->Left = 450;
    ball->Top = 350;
    ball->Visible = true;
    x=-10; y=-8;
    Timer_ball->Enabled=true;
    Label2->Visible=false;
    Label5->Visible=false;
    numberOfRreflections=0;
    Label3->Visible=false;
    Button3->Visible=false;
    Timer_ball -> Interval = 20;
}
//---------------------------------------------------------------------------


