//take two 3*4 matrix A and B and calculate output C=2*A+B
#include <stdio.h>
void main()
{
	int a[3][4]={1,1,1,1,1,1,1,1,1,1,1,1};
	int b[3][4]={2,2,2,2,2,2,2,2,2,2,2,2};
	int c[3][4],i,j;
	printf("Elements of 3*4 matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=2*(a[i][j]+b[i][j]);
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Elements of 3*4 matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("The elements of 3*4 matrix C after C=2*A+B are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}	
}
