//WAP to convert temperature in centigrade into fahrenheit
#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
//	clrscr();
	printf("Enter Temperature in Centigrade:");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("%.2fcentigrade = %.2ffarehnheit",c,f);
	getch();
}
