#include <mega16.h>
#include <delay.h>

unsigned char angka[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f}; 
int satuan,puluhan,ratusan,ribuan,data,data_temp,x;

void ambil_data()
{
data_temp = data ;
satuan = data_temp%10;//rumus untuk satuan
puluhan = (data_temp/10)%10;//rumus untuk puluhan
ratusan = (data_temp/100)%10;//rumus untuk ratusan
ribuan = (data_temp/1000)%10; //rumus untuk ribuan
}

void tampil ()
{
//mengatur nilai satuan
PORTB.0 = 1;
PORTB.1 = 1 ;
PORTB.2 = 1 ;
PORTB.3 = 0 ;
PORTC = angka[satuan];
delay_ms(1);

//mengatur nilai puluhan 
PORTB.0 = 1;
PORTB.1 = 1 ;
PORTB.2 = 0 ;
PORTB.3 = 1 ;
PORTC = angka[puluhan];
delay_ms(1);

//mengatur nilai ratusan 
PORTB.0 = 1;
PORTB.1 = 0 ;
PORTB.2 = 1 ;
PORTB.3 = 1 ;
PORTC = angka[ratusan];
delay_ms(1);

// mengatur nilai ribuan
PORTB.0 = 0 ;
PORTB.1 = 1 ;
PORTB.2 = 1 ;
PORTB.3 = 1 ;
PORTC = angka[ribuan];
delay_ms(1);
}

void main(void)
{
DDRA=0x00;
DDRB=0xFF;
DDRC=0xFF;
DDRD=0xFF;
PORTA=0xFF;
PORTB=0x00;
PORTC=0x00;
PORTD=0x00;


    while (1)
      {
      // Place your code here

        for(x=0;x<50;x++)  
        {
        ambil_data();
        tampil();
        } 
      
   //membatasi nilai maximum
      if (PINA.0==0)
        {
        data++;
        if (data>9999)
            {
            data=0;
            }
        }
//membatasi nilai minimum
     
      if (PINA.1==1)
        {
        data--;
        if (data<=0)
            {
            data=0;
            }
        }
      
      if (PINA.2==1)
        {
         PORTD=0x0F;
         delay_ms(100);
         PORTD=0x00;
         delay_ms(100);
         PORTD=0x03;
         delay_ms(100);
         PORTD=0x0C;
         delay_ms(100);
         }    

         
      }
}