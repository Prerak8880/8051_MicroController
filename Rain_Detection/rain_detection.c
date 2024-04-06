#include <reg51.h>

sbit RAIN = P1^0;
sbit LED = P2^0; // LED connected to P2.0

void main()
{
    LED = 0; // Ensure LED is initially turned off

    while(1)
    {
        if(RAIN == 0) // If rain is detected
        {
            LED = 1; // Turn on the LED
        }
        else
        {
            LED = 0; // Turn off the LED
        }
    }
}
