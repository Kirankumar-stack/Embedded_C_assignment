#include <stdio.h>

#define SIZE 32

int main()
{
    char output[SIZE];
    int c;
    int x = 0;

    printf("Type hex (l/c) digits, 0 to end: ");
    while(x < SIZE)
    {
        scanf("%2x",&c);
        output[x] = (char)c;
        if(c == 0) break;
        x++;
    }
    printf("\n%s\n",output);

    return(0);
}
