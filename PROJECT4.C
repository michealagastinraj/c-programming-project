#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int rollno;
	int mark;
	char city[20];
	char Dream[20];
};
int main()
{
struct student s[10];
int i;
clrscr();
for(i=0;i<10;i++)
{
printf("Enter the data:\n");
scanf("%s %d %d %s %s",s[i].name,&s[i].rollno,&s[i].mark,s[i].city,s[i].Dream);
}
for(i=0;i<10;i++)
{
printf("%s %d %d %s %s\n",s[i].name,s[i].rollno,s[i].mark,s[i].city,s[i].Dream);
}
getch();
return 0;
}