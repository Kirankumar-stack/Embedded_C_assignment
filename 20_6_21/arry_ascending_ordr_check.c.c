/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
   //int array[10] = {10, 11, 3, 4, 50, 69, 7, 8, 9, 90};
   int array[] = {10, 11, 37, 44, 50, 69, 75, 80, 87, 90,122,145,167};
   char i=0;
   int size_of_arry = sizeof(array)/4;
   
   printf(" nuber of elementes in arry %d \n",size_of_arry);
   
   for( i = 0; i < size_of_arry-1 ;i++)
   {
       if(array[i] > array[i+1])
       {
            
            printf(" array not in asceding order %d",i)  ; 
            return 0;
       }
       
   }
    printf(" array in asceding order")  ; 
   return 0;
}
