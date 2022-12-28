/*******************************************************

Project : Traffic Light
Nama    : Muhammad Ridwan Ramadhan
Date    : 17/03/2020


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 8,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16.h>
#include <delay.h>

int jalan;

void lampu()
{
    PORTC=0x0C;
    PORTD=0x0C;
    delay_ms(200);
    
    PORTC=0x0A;
    PORTD=0x0A;
    delay_ms(100);
    
    PORTC=0x21;
    PORTD=0x21;
    delay_ms(200);
    
    PORTC=0x11;
    PORTD=0x11;
    delay_ms(100);  
}

void tombol()
{
    if(PINB.0==0) {jalan=1;};
}

void aktif()
{
    if (jalan==1) {lampu();};
}

void main(void)
{
PORTB=0xFF;
DDRB=0x00;
PORTC=0x00;
DDRC=0xFF;
PORTD=0x00;
DDRD=0xFF;

{
while(1)
    {
    tombol();
    aktif();
    }   
}
}