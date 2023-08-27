//read and display 2-D array of size (m*n)
#include <stdio.h>
void display(int,int,int[10][10]);
void main()
{
	int i,j,m,n,a[10][10];
	printf("Enter the no. of rows column:");
	scanf("%d%d",&m,&n);
	printf("Enter elements of array:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	display(m,n,a);
}
void display(int m,int n,int arr[10][10])
{
	int i,j;
	printf("Displaying 2-D array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
