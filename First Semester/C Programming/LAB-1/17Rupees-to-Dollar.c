//WAP to convert rupees into dollar
#include<stdio.h>
#include<conio.h>
void main()
{
	int rs;
	float dollar;
//	clrscr();
	printf("Enter amount in Rupees:");
	scanf("%d",&rs);
	dollar=rs/122.40;
	printf("Rs.%d = %.2f$",rs,dollar);
	getch();
}
