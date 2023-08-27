//perform addition of 1-D array
#include <stdio.h>
void main()
{
	int A[10],B[10],C[10],i;
	int *p1,*p2;
	p1=A;
	p2=B;
	printf("Enter 10 elements in first array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p1+i));
	}
	printf("Enter 10 elements in second array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p2+i));
		C[i]=*(p1+i)+*(p2+i);
	}
	printf("Summation of two array is:\n");
	for(i=0;i<5;i++)
	{
		printf("C[%d] = %d\n",i,C[i]);
	}
	
}
