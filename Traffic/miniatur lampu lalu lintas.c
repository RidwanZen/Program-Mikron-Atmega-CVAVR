#include <mega16.h>
#include <delay.h>

int jalan;

void lampu1()
    {
    PORTC=0x0C;        // H1 On ,M2 ON
    PORTD=0x09;        // M3,4 ON
    delay_ms(100);
    
    PORTC=0x0A;        // K1 ON , M2 ON
    PORTD=0x09;        // M3,4 ON
    delay_ms(100);
    
    PORTC=0x21;       
    PORTD=0x09;
    delay_ms(100);
    
    PORTC=0x11;
    PORTD=0x09;
    delay_ms(100); 
    
    PORTC=0x09;
    PORTD=0x0C;
    delay_ms(100);
    
    PORTC=0x09;
    PORTD=0x0A;
    delay_ms(100);
    
    PORTC=0x09;
    PORTD=0x21;
    delay_ms(100);
    
    PORTC=0x09;
    PORTD=0x11;
    delay_ms(100); 
    }

void lampu2()
    {
    PORTC=0x0C;          //Simpang A dan B lampu hijau
    PORTD=0x0C;          //Simpang C dan D lampu merah
    delay_ms(100);
    
    PORTC=0x0A;          // Simpang A dan B, kuning
    PORTD=0x0A;          // Simpang C dan D tetap merah
    delay_ms(100);
    
    PORTC=0x11;          // Simpang A dan B merah
    PORTD=0x11;          // Simpang C dan D kuning
    delay_ms(100);
    
    PORTC=0x21;          // Simpang A dan B merah
    PORTD=0x21;          // Simpang C dan D hijau
    delay_ms(100); 
    
    PORTC=0x11;          // Simpang A dan B merah
    PORTD=0x11;          // Simpang C dan D kuning 
    delay_ms(100);

    PORTC=0x0A;          // Simpang A dan B kuning
    PORTD=0x0A;          // Simpang C dan D merah
    delay_ms(100);  
    }

void tombol()
{
    if (PINB.0==0) {jalan=1;};
    if (PINB.1==0) {jalan=2;};
}

void aktif()
{
    if (jalan==1) {lampu1();};
    if (jalan==2) {lampu2();};
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
