//C=A+B where A,B and C are 1-D array of size 10, using user defined function called add
//prototype: void add(int *at, int *bt, int *ct)
#include <stdio.h>
void add(int *at, int *bt, int *ct)
{
	int i;
	for(i=0;i<5;i++)
	{
		*(ct+i)=*(at+i)+*(bt+i);
	}
}
void main()
{
	int A[10],B[10],C[10],i;
	printf("Enter 10 numbers in A:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter 10 numbers in B:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&B[i]);
	}
	add(A,B,C);
	printf("result of C = A+B is \n");
	for(i=0;i<5;i++)
	{
		printf("C[%d] = %d\n",i,C[i]);
	}
}
