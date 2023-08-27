//read two variable and swap the data between two variables
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=3;
	printf("Before swapping\n");
	printf("a=%d \tb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping\n");
	printf("a=%d \tb=%d",a,b);
	getch();
}
