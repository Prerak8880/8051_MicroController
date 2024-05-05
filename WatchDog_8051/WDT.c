#include <reg51.h>

sfr WDTRST = 0XA6;

void delay(unsigned int x)
{
	while(x--);
}

void main()
{
	P0 = 0X00;
	delay(25000);
	P0 = 0XFF;
	delay(25000);
	P0 = 0X00;
	delay(25000);

	WDTRST = 0X1E;
	WDTRST = 0XE1;
		
	while(1);
}
