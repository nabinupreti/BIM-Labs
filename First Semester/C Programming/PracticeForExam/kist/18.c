#include <stdio.h>
void swap(int *, int *);
void main()
{
	int a,b;
	printf("Enter 2 number:");
	scanf("%d%d",&a,&b);
	printf("Before swapping:\na=%d\nb=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping:\na=%d\nb=%d",a,b);
}
swap(int *n1, int *n2)
{
	int c;
	c = *n1;
	*n1 = *n2;
	*n2 = c;
}
