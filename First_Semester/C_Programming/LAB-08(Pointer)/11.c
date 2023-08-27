//swap the content of 2 variable using function swap
//prototype: void swap(int *,int *)
#include <stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping:\n");
	printf("a = %d \tb=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping:\n");
	printf("a = %d \tb=%d",a,b);
}
void swap(int *p1,int *p2)
{
	int c;
	c=*p1;
	*p1=*p2;
	*p2=c;
}
