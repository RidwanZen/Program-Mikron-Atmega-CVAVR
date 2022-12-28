#include <mega16.h>
#include <delay.h>

void main(void)
{
DDRA=0x00;
DDRC=0xFF;
DDRD=0xFF;
PORTA=0xFF;
PORTC=0x00;
PORTD=0x00;

while (1)
    {
     if (PINA.7==1)
     {
      PORTC=0x01;
      PORTD=0x04;
      delay_ms(300);
        
      PORTC=0x02;
      PORTD=0x01;
      delay_ms(300);
      
      PORTC=0x04;
      PORTD=0x01;
      delay_ms(300);
      
      PORTC=0x01;
      PORTD=0x02;
      delay_ms(300);  
      
      PORTC=0x01;
      PORTD=0x04;
      delay_ms(300);
      
      PORTC=0x00;
      PORTD=0x00;
      delay_ms(300);
     }
    }
}