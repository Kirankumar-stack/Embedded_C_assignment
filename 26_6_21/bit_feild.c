//print bit value using union

struct bit_st
  {
  unsigned char bit_0 : 1;
  unsigned char bit_1 : 1;
  unsigned char bit_2 : 1;
  unsigned char bit_3 : 1;
  unsigned char bit_4 : 1;
  unsigned char bit_5 : 1;
  unsigned char bit_6 : 1;
  unsigned char bit_7 : 1;
 
  };

union bit_un
  {
  unsigned char number;
  struct bit_st bits;
  };

void main (void)
  {
  union bit_un x;

  x.number = 0xAA;
  
 
  printf ("%x,%x,%x,%x,",x.bits.bit_7,x.bits.bit_6,x.bits.bit_5,x.bits.bit_4);
  printf ("%x,%x,%x,%x,",x.bits.bit_3,x.bits.bit_2,x.bits.bit_1,x.bits.bit_0);
  }




