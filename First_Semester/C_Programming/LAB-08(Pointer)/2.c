//Perform mathematical calulation of two number given by user using pointer
#include <stdio.h>
void main()
{
	int a,b;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("Enter two numbers:");
	scanf("%d%d",p1,p2);
	printf("Sum of %d and %d is %d\n",*p1,*p2,*p1+*p2);
	printf("Difference of %d and %d is %d\n",*p1,*p2,*p1-*p2);
	printf("Multiplication of %d and %d is %d",*p1,*p2,*p1*(*p2));
}
