
// 5. Do exclusive OR for 20,20,40,40,13,13,11,88,88,98,99,11,11
#include <stdio.h>


//return x && (!(x&(x-1)));

int main()
{
    char arry[] = {20,20,40,40,13,13,11,88,88,98,99,11,11};
    char data= 0x00,n=1;
    
    n = sizeof(arry);
    data = arry[0];
    
    while(n>0)
    {
        data ^= arry[n];
        n--;
    }
  printf("ex-or result %d",data);

    return 0;
}
