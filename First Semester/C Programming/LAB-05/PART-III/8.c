//read two matrix multiply them and stored it in third array
#include <stdio.h>
void multiply(int,int,int,int[100][100],int[100][100]);
void main()
{
	int r1,c1,r2,c2,i,j;
	int a[100][100],b[100][100];
	printf("Enter rows and column of first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and column of second matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("sorry!!Given two matrix cannot be multiplied.\n");
	}
	else
	{
		printf("Enter the elements of first matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of second matrix:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		multiply(c1,r1,c2,a,b);
	}
}
void multiply(int c1,int r,int c,int a[100][100],int b[100][100])
{
	int i,j,k,temp=0;
	int res[100][100];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c1;k++)
			{
				temp+=a[i][k]*b[k][j];
			}
			res[i][j]=temp;
			temp=0;
		}
	}
	printf("Multiplication result:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
}
