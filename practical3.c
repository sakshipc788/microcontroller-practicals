#include <reg51.h>

void display(unsigned char byte);
void delay(unsigned int time);

void main(void)
{
    P0 = 0x00;
    P1 = 0xFF;

    while(1)
    {
        display(0xC0);
        display(0xF9);
        display(0xA4);
        display(0xB0);
        display(0x99);
        display(0x92);
        display(0x82);
        display(0xF8);
        display(0x80);
        display(0x90);
        display(0x88);
        display(0x83);
        display(0xC6);
        display(0xA1);
        display(0x86);
        display(0x8E);
    }
}

void display(unsigned char byte)
{
    P0 = byte;
    delay(900);
}

void delay(unsigned int time)
{
    int i, j;

    for(i = 0; i < time; i++)
    {
        for(j = 0; j < 1000; j++);
    }
}