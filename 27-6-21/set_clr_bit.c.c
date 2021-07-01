// 6. Write macros to setbits and clear bits
#include <stdio.h>

#define SET_BIT(num,position)    (num |= (1<<position))

#define CLEAR_BIT(num,position)  (num &= ~(1<<position))

int main()
{
    unsigned char data1= 0x00,data2 = 0xFF;
    
    SET_BIT(data1,4);
    CLEAR_BIT(data2,4);
  
    printf(" data1=%X  data2=%X",data1,data2);

    return 0;
}
