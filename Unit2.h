//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TShape *background;
        TImage *ball;
        TTimer *Timer_ball;
        TTimer *leftPaddleUp;
        TTimer *leftPaddleDown;
        TImage *leftPaddle;
        TImage *rightPaddle;
        TTimer *rightPaddleUp;
        TTimer *rightPaddleDown;
        TButton *Button1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label5;
        TButton *Button2;
        TButton *Button3;
        TLabel *Label3;
        void __fastcall Timer_ballTimer(TObject *Sender);
        void __fastcall leftPaddleUpTimer(TObject *Sender);
        void __fastcall leftPaddleDownTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall rightPaddleUpTimer(TObject *Sender);
        void __fastcall rightPaddleDownTimer(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
