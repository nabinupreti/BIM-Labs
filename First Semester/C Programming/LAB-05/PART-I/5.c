//count total nummber of positive element in array
#include <stdio.h>
void main()
{
	int n,a[100],i,counter=0;
	printf("Enter how many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			counter++;
		}
	}
	printf("NO. of positive elements is %d.",counter);
}
