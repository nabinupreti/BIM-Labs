#include <stdio.h>
void even(int,int []);
void main()
{
	int a[100],n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	even(n,a);
}
void even(int n, int num[100])
{
	int i;
	printf("Eve numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(num[i]%2==0)
		printf("%d, ",num[i]);
	}
}

