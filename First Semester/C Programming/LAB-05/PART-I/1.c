#include <stdio.h>
void main()
{
	int n,a[100],i;
	
	printf("Enter the size of array a[?]:");
	scanf("%d",&n);
	printf("Enter %d elements in array:\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
		
	}
}
