
#include <mega16.h>

void main(void)
{
 DDRB=0xFF;
 DDRC=0x00;
 PORTC=0xFF;
 PORTB=0x00;
 
while (1)
 {
  if (PINC.0==0)
    {PORTB=0x09;}
  if (PINC.1==0)
    {PORTB=0x06;}
  if (PINC.2==0)
    {PORTB=0x00;}
  }
}