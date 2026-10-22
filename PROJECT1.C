#include<stdio.h>
int main()
{
float a,b;
char op;
clrscr();
printf("enter the two numbers:");
scanf("%f%f",&a,&b);
printf("enter the operator:");
scanf(" %c",&op);
switch(op){
case'+':printf("addition=%.2f",a+b);
break;
case'-':printf("sub=%.2f",a-b);
break;
case'*':printf("multipltiplication=%.2f",a*b);
break;
case'/':printf("div=%.2f",a/b);
break;
default:printf("invalid operator");
}
return 0 ;
}
