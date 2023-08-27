#include <stdio.h>
void swap(int * , int *);
void main()
{
	int n1,n2;
	printf("Enter the velue of A and B:");
	scanf("%d%d",&n1,&n2);
	printf("\nBefore swapping:\na=%d\nb=%d",n1,n2);
	swap(&n1,&n2);
	printf("\nAfter swapping:\na=%d\nb=%d",n1,n2);

}
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
