//Sum of all elements of array
#include <stdio.h>
void main()
{
	int n,a[100],i,sum=0;
	printf("Enter how many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum of all elements = %d.",sum);
}
