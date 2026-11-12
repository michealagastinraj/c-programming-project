#include<stdio.h>
int main(int argc.char*argv[])
{
char name[30];
int m1,m2,m3,m4,m5,total;
float average;
if(argc!=7)
{
printf("usage: .\a.out name m1 m2 m3 m4 m5\n");
}
strcpy(name,argv[1]);
m1=ato1(argv[1]);
m2=atoi(ardv[2]);
m3=atoi(argv[3]);
m4=atoi(argv[4]);
m5=atoi(argv[5]);

printf("Tamil:%d\n",m1);
printf("English:%d\n"m2);
printf("Maths:%d\n",m3);
printf("science:%d\n",m4);
printf("Social_science:%d\n",m5);
total=(m1+m2+m3+m4+m5)/5;
if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("Result:Fail\n");
}


return 0;}
