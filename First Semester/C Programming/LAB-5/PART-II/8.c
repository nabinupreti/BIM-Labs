//take two 3*4 matrix A and B and calculate output C=5*A-B
#include <stdio.h>
void main()
{
	int a[3][4],b[3][4],c[3][4],i,j;
	printf("The elements of 3*4 matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of 3*4 matrix B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
			c[i][j]=5*(a[i][j]-b[i][j]);
		}
	}
	printf("The elements of 3*4 matrix C after C=5*A-B are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	
}
