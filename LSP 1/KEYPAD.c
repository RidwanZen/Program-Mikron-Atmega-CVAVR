#include <mega8535.h>
#include <delay.h>
#include <alcd.h>

void main (void)
 {
    DDRC = 0XFF;
    PORTC = 0X00;
    DDRB = 0x0F; // PD0-3 as output, PD4-7 as input

    lcd_init (16); // Characters / line: 16

 while (1) // main program
   {
    PORTB = 0b11111110;
    if (PINB.4 == 0) {lcd_gotoxy (15,1); lcd_putsf ("7");}
    if (PINB.5 == 0) {lcd_gotoxy (15,1); lcd_putsf ("8");}
    if (PINB.6 == 0) {lcd_gotoxy (15,1); lcd_putsf ("9");}
    if (PINB.7 == 0) {lcd_gotoxy (15,1); lcd_putsf ("/");}
    delay_ms (30);

    PORTB = 0b11111101;
    if (PINB.4 == 0) {lcd_gotoxy (15,1); lcd_putsf ("4");}
    if (PINB.5 == 0) {lcd_gotoxy (15,1); lcd_putsf ("5");}
    if (PINB.6 == 0) {lcd_gotoxy (15,1); lcd_putsf ("6");}
    if (PINB.7 == 0) {lcd_gotoxy (15,1); lcd_putsf ("X");}
    delay_ms (30);

    PORTB = 0b11111011;
    if (PINB.4 == 0) {lcd_gotoxy (15,1); lcd_putsf ("1");}
    if (PINB.5 == 0) {lcd_gotoxy (15,1); lcd_putsf ("2");}
    if (PINB.6 == 0) {lcd_gotoxy (15,1); lcd_putsf ("3");}
    if (PINB.7 == 0) {lcd_gotoxy (15,1); lcd_putsf ("-");}
    delay_ms (30);

    PORTB = 0b11110111;
    if (PINB.4 == 0) {lcd_gotoxy (15,1); lcd_putsf ("");}
    if (PINB.5 == 0) {lcd_gotoxy (15,1); lcd_putsf ("0");}
    if (PINB.6 == 0) {lcd_gotoxy (15,1); lcd_putsf ("=");}
    if (PINB.7 == 0) {lcd_gotoxy (15,1); lcd_putsf ("+");}
    delay_ms (30);
   }
  } 
