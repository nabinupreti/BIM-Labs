//sum of all even number from 1-100
#include <stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("Sum of all even number from 1-100 is %d.",sum);
}
