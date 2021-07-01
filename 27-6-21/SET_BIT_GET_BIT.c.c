
//1. Write a macro to get the bit and set the bit.


#include <stdio.h>

#define SET_BIT(data,bit_num)   (data = data|(1<<bit_num))
#define GET_BIT(data,bit_num)   ((data&(1<<bit_num))?1:0)

int main()
{
    int data1 =0x55,data2 =0;
    char postion=2,bit_value=0;
    
    bit_value = GET_BIT(data1,postion);
    
    printf("Hello World  %x , %x",bit_value,data1);
    
    SET_BIT(data1,3) ;
    
    printf("Hello World  %x , %x",bit_value,data1);

    return 0;
}
