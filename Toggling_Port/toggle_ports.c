#include <reg51.h>


void delay_ms();

main()
{
	while(1){
		P2 = 0x55;
		delay_ms();
		P2 = 0xAA;
		delay_ms();
	}
}

void delay_ms()
{
	int i,j;
	for(i=0; i<100; i++)
		for(j=0; j<1275; j++);
	
}
