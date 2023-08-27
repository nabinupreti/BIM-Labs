//Three 1-D array A,B,And C of size n,accept content of A and B and 
//perform C=A-B
#include <stdio.h>
void main()
{
	int A[100],B[100],C[100],i,n;
	int *p,*p1,*p2,*p3;
	p=&n;
	p1=A;
	p2=B;
	p3=C;
	printf("How many number do you want to enter?");
	scanf("%d",p);
	printf("Enter %d elements for A:",*p);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p1+i));
	}
	printf("Enter %d elements for B:",*p);
	for(i=0;i<n;i++)
	{
		scanf("%d",(p2+i));
		*(p3+i)= *(p1+i)-*(p2+i);
	}
	printf("Subtraction of given two array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p3+i));
	}
}
