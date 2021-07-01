
//3. Write a program with Macro to find even or odd using bitwise operator.
#include <stdio.h>

#define GET_NUM_TYPE(num)  ((num&0x01)?printf("ODD"):printf("EVEN"))

int main()
{
    char data= 0x59,type=0;
    type = GET_NUM_TYPE(data);
    return 0;
}
