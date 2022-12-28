/*******************************************************
This program was created by the CodeWizardAVR V3.37 
Automatic Program Generator
� Copyright 1998-2019 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 06/04/2020
Author  : 
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 8,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16.h>
#include <delay.h>

void main(void)
{
PORTC=0x00;
DDRC=0xFF;
PORTD=0x00;
DDRD=0xFF;

while(1)
    {
      PORTC=0xF9;    // Huruf I
      PORTD.0=1;
      delay_ms(100);       // Untuk Huruf W tidak ada
      PORTC=0x88;     // Huruf A
      PORTD.0=1;
      delay_ms(100);
      PORTC=0xC8;    // Huruf N
      PORTD.0=1;
      delay_ms(100);
     }
}
