//read an array and sort them in ascending and descending order
#include <stdio.h>
void sorting(int,int []);
void main()
{
	int arr[200],i,n;
	printf("Enter the size of an array:");
	scanf(" %d",&n);
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sorting(n,arr);
}
void sorting(int n,int a[200])
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("In ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\nIn descending order:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d, ",a[i]);
	}
}

