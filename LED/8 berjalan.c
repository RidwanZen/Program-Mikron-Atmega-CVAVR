#include <mega16.h>
#include <delay.h>

int tanda;

void kanan()
{
PORTD=0b10000000;
delay_ms(50);
PORTD=0b01000000;
delay_ms(50);
PORTD=0b00100000;
delay_ms(50);
PORTD=0b00010000;
delay_ms(50);
PORTD=0b00001000;
delay_ms(50);
PORTD=0b00000100;
delay_ms(50);
PORTD=0b00000010;
delay_ms(50);
PORTD=0b00000001;
delay_ms(50);
}
void kiri()
{
PORTD=0b00000001;
delay_ms(50);
PORTD=0b00000010;
delay_ms(50);
PORTD=0b00000100;
delay_ms(50);
PORTD=0b00001000;
delay_ms(50);
PORTD=0b00010000;
delay_ms(50);
PORTD=0b00100000;
delay_ms(50);
PORTD=0b01000000;
delay_ms(50);
PORTD=0b10000000;
delay_ms(50);
}
void tombol()
{
if(PINB.0==0){tanda=1;}
if(PINB.1==0){tanda=2;}
if(PINB.2==0){tanda=3;}
}
void stop()
{
PORTD=0b00000000;
}
void cek_tanda()
{
if(tanda==1){kanan();}
if(tanda==2){kiri();}
if(tanda==3){stop();}
}
void main(void)
{

PORTB=0xFF;
DDRB=0x00;

PORTD=0x00;
DDRD=0xFF;

while (1)
      {
      tombol();
      cek_tanda();
      }
}