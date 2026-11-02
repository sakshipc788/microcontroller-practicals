#include <reg51.h>

sbit Relay = P1^0;
sbit Buzzer = P1^1;
sbit Relay_SW = P1^2;
sbit Buzzer_SW = P1^3;

void main()
{
    P1 = 0xFC;

    Relay = 0;
    Buzzer = 0;

    while(1)
    {
        if(Relay_SW == 0)
        {
            Relay = 0;
            Buzzer = 1;
        }

        if(Buzzer_SW == 0)
        {
            Buzzer = 0;
            Relay = 1;
        }
    }
}