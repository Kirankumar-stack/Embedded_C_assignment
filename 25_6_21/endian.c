#include<stdio.h>

int main()
{

  union{
  	int  x;
	short sh;
	char c[2];
	char ch[4];
  } var;


  var.x = 0x12345678;

  printf("0x%x 0x%X  0X%X\n",var.sh,var.c[0],var.c[1]);
  printf("0x%x 0x%x 0x%x 0x%x\n" ,var.ch[0],var.ch[1],var.ch[2],var.ch[3]);

if(var.ch[0] == 0x78)
	printf("litle endian\n");
else
        printf("big endian\n");	

}

