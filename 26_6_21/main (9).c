
//4. Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro.

 #include <stdio.h>
 
 #define BIT_SET(num,position)    (num |= (1<<position))
 #define BIT_CLEAR(num,position)  (num &=~ (1<<(position))
 #define BIT_TOGGLE(num,position) (num ^= (1<<(position))
   


int main (void)
{
    int data = 0x78;
    char bit_val = 0;
    bit_val = BIT_SET(data,1);
    printf("%x",data);
     
    bit_val = BIT_CLEAR(data,1));
    printf("%x",data); 
    
    bit_val = BIT_TOGGLE(data,1));
    printf("%x",data); 

    
    
}