#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char*argv[])
{
char name[30];
int m1,m2,m3,m4,m5,total;
float average;
clrscr();
if(argc!=7)
{
printf("usage: .\a.out name m1 m2 m3 m4 m5\n");
return 0;
}
strcpy(name,argv[1]);
m1=atoi(argv[2]);
m2=atoi(argv[3]);
m3=atoi(argv[4]);
m4=atoi(argv[5]);
m5=atoi(argv[6]);
total=m1+m2+m3+m4+m5;
average=total/5.0;

printf("\n-----STUDENT REPORT------\n");
printf("Student name:%s\n",name);
printf("Tamil:%d\n",m1);
printf("English:%d\n",m2);
printf("Maths:%d\n",m3);
printf("science:%d\n",m4);
printf("Social_science:%d\n",m5);

printf("Total:%d\n",total);
printf("Average:%.2f\n",average);

if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("Result:Fail\n");
}
else
{
printf("Result:Pass\n");
if(average>=90)
	printf("Grade:A+\n");
else if(average>=80)
	printf("Grade:A\n");
else if(average>=70)
	printf("Grade:B\n");
else if (average>=60)
	printf("Grade:C\n");
else
	printf("Grade:D\n");
}
return 0;
}
