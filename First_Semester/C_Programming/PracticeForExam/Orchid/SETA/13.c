#include <stdio.h>
void main()
{
	int n,i,fact=1,num,j;
	float sum=1.0;
	printf("Enter the value of N:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		num=i;
		for(j=2;j<=num;j++)
		{
			fact=fact*j;
		}
		sum+=(i/(float)fact);
		fact=1;
	}
	printf("Sum of series upto %d is %.2f.",n,sum);
}
