//print all negetive elements in an array
#include <stdio.h>
void main()
{
	int n,a[100],i;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negative elements are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
		}
	}
}
