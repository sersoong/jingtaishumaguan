/*
 */

#include <mcs51/8051.h>

typedef unsigned int u16;
typedef unsigned char u8;


u8 smgduan[17]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
					0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};

void delay(int i)
{
   while(i--);
}

void main(void)
{

    // Insert code
    u16 i = 0;
    P0_7 = 0;
    while(1)
    {
        P0=~smgduan[i];
        P0_7=!P0_7;
        i++;
        if(i>=17){
            i=0;
        }
        delay(40000);
    }
}
