//wap to read three sides of triangle and calculate area
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float s,area;
	//clrscr();
	printf("Enter three sides of Triangle:");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is %.2f",area);
	getch();
}
