//receive a number convert in to degree and calculate its correspondence sin,cos and tan value
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
void main()
{
	int num;
	double deg=30; 
	//clrscr();
	printf("Enter a Number:");
	scanf("%d",&num);
	deg=num*(PI/180);
	printf("Degree = %.2f\n",deg);
	printf("sin(%.2f) = %.2f\n",deg,sin(deg));
	printf("cos(%.2f) = %.2f\n",deg,cos(deg));
	printf("tan(%.2f) = %.2f\n",deg,tan(deg));
	getch();
}
