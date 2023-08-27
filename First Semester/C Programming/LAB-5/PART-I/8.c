//find smallest and the largest element in the array size 10
#include <stdio.h>
void main()
{
	int a[10],i,small,large;
	printf("Enter 10 elements in array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	small=large=a[0];//initializing first element as large and small value
	for(i=1;i<10;i++)
	{
		//for largest
		if(a[i]>large)
		{
			large=a[i];
		}
		//for smallest
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("Largest element = %d\n",large);
	printf("Smallest element = %d\n",small);
}
