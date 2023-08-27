//Accept dollar from user and calculate equivalent NRs and display
#include<stdio.h>
#include<conio.h>
void main()
{
	int d;
	float rs;
//	clrscr();
	printf("Enter Amount in Dollar:");
	scanf("%d",&d);
	rs=d*122.40;
	printf("%d$=NRs%.2f",d,rs);
	getch();
}
