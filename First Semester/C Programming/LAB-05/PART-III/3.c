//read 2 array, add 2 array and store the result in third array
//define read(), add() and display() function
#include <stdio.h>
void read();
void add(int,int [],int []);
void display(int,int []);
void main()
{
	read();
}
void read()
{
	int n,a[500],b[500],i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter %d values in first array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d values in second array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	add(n,a,b);
}
void add(int n,int a[500],int b[500])
{
	int c[500],i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	display(n,c);
}
void display(int n,int sum[500])
{
	int i;
	printf("After summation of 2 array:\n");
	for(i=0;i<n;i++)
	{
		printf("sum[%d]=%d\n",i,sum[i]);
	}
}
