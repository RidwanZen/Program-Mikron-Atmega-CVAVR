/*******************************************************

Project : Lampu penyebrangan jalan
Nama    : Muhammad Ridwan Ramadhan
Date    : 17/03/2020
Kelas   : XI EI 3


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

void variasi1()
{
    PORTC=0x0C;
      
}

void variasi2()
{
    PORTC=0x0C;
    delay_ms(100);
    
    PORTC=0x12;
    delay_ms(100); 
    
    PORTC=0x21;
    delay_ms(800);
    
    PORTC=0x12;
    delay_ms(200); 
    
    PORTC=0x0C;
    delay_ms(10);
       
}

void tombol()
{
    if (PINB.0==1) {jalan=1;};
    if (PINB.1==0) {jalan=2;};
}

void aktif()
{
    if (jalan==1) {variasi1();};
    if (jalan==2) {variasi2();};
}

void main(void)
{
PORTB=0xFF;
DDRB=0x00;
PORTC=0x00;
DDRC=0xFF;

{
while(1)
    {
    tombol();
    aktif();
    }  
}
}