//WAP that calls a function called getArea(). This function is responsible for
//reading l&b and print area of rectangle.
#include <stdio.h>
void getArea();
void getArea()
{
	int l,b,area;
	printf("Enter length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("Area of rectangle is %d",area);
}
void main()
{
	getArea();
}
