#include<stdio.h>
int main()
{
int pin=1388;
int Enterpin;
int choice;
float amount;
float bank_balance=5000;
clrscr();

printf("\n =====welcome to atm====\n");
printf("Enterpin:\n");
scanf("%d",&Enterpin);
if(Enterpin!=pin)
{
printf("invalid_pin\n");
return 0;
}
printf("\nlogin_successfully\n");
do
{
printf("\n===menu===\n");
printf("\n1.bank_balance\n");
printf("\n2.Cash_withdrawal\n");
printf("\n3.cash_deposite\n");
printf("\n4.Exit\n");

printf("Enter your choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:

	printf("\nyour_balance:Rs.%.2f\n",bank_balance);
	break;
case 2:
	printf("\nEnter_withdrawal_amount\n");
	scanf("%f",&amount);



	if(amount<=0)
	{
	printf("enter_amount_greater_than 0");

	}

	else if (amount<=bank_balance)
	{
	bank_balance=bank_balance-amount;
	printf("please collect your money\n");
	printf("current_balance=%.2f\n",bank_balance);

	}
	else{
	printf("Insufficiant balance");
	}

	break;
case 3:
	printf("Enter you deposite amount\n");
	scanf("%f",&amount);
	if(amount>0)
	{
	bank_balance=bank_balance+amount;
	printf("Money deposited successfully\n");
	printf("your current balance:Rs.%.2f\n",bank_balance);
	}
	else
	{
	printf("Invalid amount\n");
	}
	break;

case 4:
	printf("Thank you for using ATM!\n");
	break;

default:
printf("Invalid amount\n");
}
} while (choice!=4);
return 0;
}






