/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{
   //int array[10] = {10, 11, 3, 4, 50, 69, 7, 8, 9, 90};
   int array[] = {10, 11, 37, 44, 50, 69, 75, 80, 87, 90,122,145,167},temp_arry[20];
   char i=0,shift_index = 0,num=7;
   int size_of_arry = sizeof(array)/4;
    printf(" nuber of elementes in arry %d \n",size_of_arry);
   // printf(" Enter number of index to shift" );
    //scanf ("%c",&shift_index);
   // printf(" Enter number of index to shift/n %c" ,shift_index) ;
    
   // num = shift_index;
   for( i = 0;i <= size_of_arry-1 ;i++)
   {    
        temp_arry[i]= array[i];
        array[i] = array[(num+i)];
        if((i+num)> (size_of_arry-1))
        {
            
            array[i]  = temp_arry[(i+num)-size_of_arry];
        }
      
        printf("data arr[%d] is %d \n",i,array[i]);
   }
   
   
    printf(" array in asceding order")  ; 
   return 0;
}
