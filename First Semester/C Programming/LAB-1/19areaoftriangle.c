//wap to read base and height of a triangle and calculate the area
#include<stdio.h>
#include<conio.h>
void main()
{
	int b,h;
	float a;
//	clrscr();
	printf("Enter base and height of triangle:");
	scanf("%d%d",&b,&h);
	a=0.5*b*h;
	printf("Area of Triangle is %.2f.",a);
	getch();
}
