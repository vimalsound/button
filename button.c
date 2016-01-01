#include<16f877a.h>
#use delay(clock = 1000000)
#use rs232(baud = 9600, xmit = pin_c6, rcv = pin_c7)



void main()
{
  set_tris_b(0x01);
  
  
  while(1)
  {
    if(input(pin_b0) == 1)
    {
      output_high(pin_b1);
      }
      else
      {
        output_low(pin_b1);
        }
        }
        }
 
