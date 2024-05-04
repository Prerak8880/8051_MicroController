/*	Question : Write an 8051 C program to toggle all the bits of port P1 continuously 
		with some delay in between. Use Timer 0, 16-bit mode to 
		generate the delay.		*/

#include <reg51.h>

void delay(void);
void main(void)
{
	while(1){
	
		P1 = 0X55;
	
		delay();
	
		P1 = 0XAA;
	
		delay();
	}
}

void delay()
{
	TMOD = 0X01;
	TL0 = 0X00;
	TH0 = 0X35;
	TR0 = 1;
	
	while(TF0 == 0);
	TR0 = 0;
	TF0 = 0;
}