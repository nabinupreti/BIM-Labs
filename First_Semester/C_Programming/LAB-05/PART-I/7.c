#include <stdio.h>
void main()
{
	int n,a[100],b[100],i;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("After copying :");
	for(i=0;i<n;i++)
	{
		printf("\n%d",b[i]);
	}
}
