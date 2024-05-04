/*	Question : Write an 8051 C program to toggle only bit P1.5 continuously every 
		50 ms. Use Timer 0, mode 1 (16-bit) to create the delay. Test the 
		program on the (a) AT89C51.	*/
		
#include <reg51.h>
void delay(void);
sbit myBit = P1^5; 
void main(void)
{
	while(1){		
		myBit = ~myBit;
		delay();		
	}
}

void delay()
{
	TMOD = 0X01;
	TL0 = 0XFD;
	TH0	= 0X4B;
	TR0 = 1;
	while(TF0 == 0);
	TR0 = 0;
	TF0 = 0;
}
