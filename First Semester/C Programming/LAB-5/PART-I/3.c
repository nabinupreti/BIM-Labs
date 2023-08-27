//store elements in array and print it
#include<stdio.h>
void main()
{
	int n,arr[100],i;
	printf("Enter how many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
}
