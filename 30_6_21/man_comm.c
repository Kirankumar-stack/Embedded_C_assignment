
#include<stdio.h>
#include<stdlib.h>

int main()
{

char name[50]= "man";
char option[10]= "-I";
char com_name[50] ="printf"; 
char command[100];
//char a =10 ,b=20;
//sprintf(command ,"unum %d ans %d",a,b);
sprintf(command,"%s%s%s %s",name," ",option,com_name);
printf("\n");
printf(command);
printf("\n");
system(command);
}
