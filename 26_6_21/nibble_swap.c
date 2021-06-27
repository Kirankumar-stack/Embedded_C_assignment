
//swap_nibble

#include<stdio.h>

struct bit_st
  {
  unsigned char bit_0 : 4;
  unsigned char bit_1 : 4;

  };

union bit_un
  {
  unsigned int number;
  struct bit_st bits;
  };

void main (void)
  {
      unsigned temp;
      union bit_un x;
  
  x.number =0x12;
  printf("%x %x   %x ",x.bits.bit_1,x.bits.bit_0 ,x.number);
  temp = x.bits.bit_0;
  x.bits.bit_0 = x.bits.bit_1;
  x.bits.bit_1 = temp;
  printf("\n%x %x   %x",x.bits.bit_1,x.bits.bit_0 ,x.number);
  
  }