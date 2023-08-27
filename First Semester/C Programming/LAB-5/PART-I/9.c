//find second largest element in an array
#include <stdio.h>
void main()
{
	int n,a[100],i,l,l2;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter  %d elements in array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=l2= 0;
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			l2=l;
			l=a[i];
		}
		else 
		{
			if(a[i]<l  && a[i]>l2)
			l2=a[i];
		}
	}
	printf("\nSecond largest element = %d",l2);
}
