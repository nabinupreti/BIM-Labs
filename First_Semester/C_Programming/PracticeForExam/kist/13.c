#include <stdio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter the value of 'n': ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i*i;
	}
	printf("The sum of square upto %d is %d.",n,sum);
}
