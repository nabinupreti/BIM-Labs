//accept amount from user and add 5% tax on it and display total amount
#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	float tamt;
//	clrscr();
	printf("Enter any amount:");
	scanf("%d",&amt);
	tamt=amt+0.05*amt;
	printf("Total Amount after 5%% tax is %.2f",tamt);
	getch();
}
