//sum and average of numbers from 1-n
#include <stdio.h>
void main()
{
	int n,sum=0,i;
	float avg;
	int *p=&n;
	printf("Enter the value of 'n':");
	scanf("%d",p);
	for(i=1;i<=*p;i++)
	{
		sum+=i;
	}
	avg=(float)sum/n;
	printf("Sum of number from 1-%d is %d.\n",*p,sum);
	printf("Average = %.2f",avg);
}
