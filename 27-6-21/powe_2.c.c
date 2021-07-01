
// 4. Write a program to find the given number is 2 power or not.
#include <stdio.h>

#define IS_POWER_TWO(x)  (x && (!(x&(x-1)))?printf("YES"):printf("NO"))

//return x && (!(x&(x-1)));

int main()
{
    char data= 0x08,type=0;
    type = IS_POWER_TWO(data);

    return 0;
}
