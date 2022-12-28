
#include <mega16.h>     //Library Atmega16
#include <delay.h>      //Library delay

//Inisialisasi
void main(void)
{
 DDRB=0x00;     //Port B sebagai INPUT
 DDRD=0xFF;     //Port D sebagai OUTPUT
 PORTD=0x00;    //Port D kondisi awal LOW
 PORTB=0xff;    //Port B kondisi awal HIGH
 
while(1)
 {
  if (PINB.1==0) //Aktif saat tombol 2 ditekan
      {
        PORTD=0x80;
        delay_ms(50);
        PORTD=0x40;
        delay_ms(50);
        PORTD=0x20;
        delay_ms(50);
        PORTD=0x10;
        delay_ms(50);
        PORTD=0x08;
        delay_ms(50);
        PORTD=0x04;
        delay_ms(50);
        PORTD=0x02;
        delay_ms(50); 
        PORTD=0x01;
        delay_ms(50);  
      }    
      
  if (PINB.0==0)    //Aktif saat tombol 1 ditekan 
      {
        PORTD=0x01;
        delay_ms(50);
        PORTD=0x02;
        delay_ms(50);
        PORTD=0x04;
        delay_ms(50);
        PORTD=0x08;
        delay_ms(50);
        PORTD=0x10;
        delay_ms(50);
        PORTD=0x20;
        delay_ms(50);
        PORTD=0x40;
        delay_ms(50);
        PORTD=0x80;
        delay_ms(50); 
      }
  if (PINB.2==0)    //Aktif saat tombol 3 ditekan
        {PORTD=0x00;}
  }
}
