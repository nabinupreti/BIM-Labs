//WAP to ask no. of quantity and price per quantity then find total price
#include<conio.h>
#include<stdio.h>
void main()
{
	int noq,ppq;
//	clrscr();
	printf("Enter Number of quantities of item: ");
	scanf("%d",&noq);
	printf("Enter price quantity of item: Rs.");
	scanf("%d",&ppq);
	printf("Total price is Rs.%d",noq*ppq);
	getch();
}
