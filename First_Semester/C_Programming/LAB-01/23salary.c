//read basic salary and find tax and allowance,
// tax is 20% and allowance is 40% of basic salary.find net salary
#include<conio.h>
#include<stdio.h>
void main()
{
	int bs;
	float t,a,ns;
//	clrscr();
	printf("Enter basic salary:");
	scanf("%d",&bs);
	t=0.2*bs;
	a=0.4*bs;
	ns=bs+a-t;
	printf("Tax 20%% = Rs.%.2f",t);
	printf("\nAllowance 40%% = Rs.%.2f",a);
	printf("\nNet Salary = Rs.%.2f",ns);
	getch();
}
