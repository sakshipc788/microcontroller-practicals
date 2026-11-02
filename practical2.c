#include <reg51.h>

sbit LED0 = P0^0;
sbit LED1 = P0^1;
sbit LED2 = P0^2;
sbit LED3 = P0^3;
sbit LED4 = P0^4;
sbit LED5 = P0^5;
sbit LED6 = P0^6;
sbit LED7 = P0^7;

sbit SW0 = P1^0;
sbit SW1 = P1^1;
sbit SW2 = P1^2;
sbit SW3 = P1^3;
sbit SW4 = P1^4;
sbit SW5 = P1^5;
sbit SW6 = P1^6;
sbit SW7 = P1^7;

void main(void)
{
    P0 = 0x00;
    P1 = 0xFF;

    while(1)
    {
        if(SW0 == 1) LED0 = 1;
        else LED0 = 0;        if(SW1 == 1) LED1 = 1;
        else LED1 = 0;

        if(SW2 == 1) LED2 = 1;
        else LED2 = 0;

        if(SW3 == 1) LED3 = 1;
        else LED3 = 0;

        if(SW4 == 1) LED4 = 1;
        else LED4 = 0;

        if(SW5 == 1) LED5 = 1;
        else LED5 = 0;

        if(SW6 == 1) LED6 = 1;
        else LED6 = 0;

        if(SW7 == 1) LED7 = 1;
        else LED7 = 0;
    }
}