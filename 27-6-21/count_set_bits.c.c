
//2. Write a program to count set bits.


#include <stdio.h>

int main()
{
    int data1 =0x73;
    char count=0,position =0;
    
    while(data1)
    {
        if((data1)&0x01)
        { 
            count++;
        }
        data1 = data1>>1;
    }
    printf("set bts= %x ,data= %x",count,data1);

    return 0;
}
