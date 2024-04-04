#include <reg51.h>

sbit rs = P1^2;
sbit rw = P1^1;
sbit en = P1^0;

void cmd(unsigned char);
void dat(unsigned char);
void delay();

void main(void)
{
	P2 = 0x00;
	
	while(1)
	{
		 cmd(0x38);
		 delay();
		 cmd(0x01);
		 delay();
		 cmd(0x10);
		 delay();
		 cmd(0x0c);
		 delay();
		 cmd(0xe81);
		 delay();
		 
		 dat('A');
		 delay();
		 dat('B');
		 delay();
		 dat('C');
		 delay();
	}
}

void cmd(unsigned char val)
{
	P2 = val;
	rs = 0;
	rw = 0;
	en = 1;
	delay();
	en = 0;
}

void dat(unsigned char val)
{
	P2 = val;
	rs = 1;
	rw = 0;
	en = 1;
	delay();
	en = 0;
}

void delay()
{
	unsigned int i;
	for(i=0; i<12000; i++);
}
