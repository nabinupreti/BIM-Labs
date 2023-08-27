//display array in reverse order
#include <stdio.h>
void main()
{
	int n,a[100],i;
	printf("Enter how many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Elements in reverse order:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d, ",a[i]);
	}
}
