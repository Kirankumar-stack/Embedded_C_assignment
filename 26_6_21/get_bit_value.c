/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//3. Write a program as a Macro will take two arguments. It should return the position 1 or 0.
 #include <stdio.h>
 
 #define BIT_VALUE(num,position)   (num & 1<<(position))? 1 :0 ;


int main (void)
{
    int c = 0x78;
     char bit_val = 0;
     
     bit_val = BIT_VALUE(c,5);
     printf("%x",bit_val);
    
    
}