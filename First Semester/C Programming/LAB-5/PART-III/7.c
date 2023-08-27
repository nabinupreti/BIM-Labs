
//read 2-D array and add, subtract, and print it using function
#include <stdio.h>
void calculation(int,int,int[20][20],int[20][20]);
void display(int,int,int[20][20],int[20][20]);
void main()
{
	int i,j,r1,c1,r2,c2,a[20][20],b[20][20];
	printf("Enter row and column of matrix 1:");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of matrix 2:");
	scanf("%d%d",&r2,&c2);
	if(r1!=r2 || c1!=c2)
	{
		printf("Sorry!!!Two matrix cannot be added and subtracted\n");
		printf("Order of two matrix should be same.\n");
	}
	else
	{
		printf("Enter the elements of matrix 1:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of matrix 2:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		calculation(r1,c1,a,b);
	}
}
void calculation(int r,int c,int a[20][20],int b[20][20])
{
	int i,j,sum[20][20],sub[20][20];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			sub[i][j]=a[i][j]-b[i][j];			
		}
	}
	display(r,c,sum,sub);
}
void display(int r,int c,int sum[20][20],int sub[20][20])
{
	int i,j;
	printf("\nAddition of 2 matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\nSubtraction of 2 matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
}
