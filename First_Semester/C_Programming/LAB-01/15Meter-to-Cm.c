//WAP to convert meter in to centimeter
#include<stdio.h>
#include<conio.h>
void main()
{
	float m,cm;
//	clrscr();
	printf("Enter length in meter:");
	scanf("%f",&m);
	cm=m*100;
	printf("%.2fm = %.2fcm",m,cm);
	getch();
}
