//WAP to add first seven terms of following series using for loop
//   1/1! + 2/2! + 3/3! +.....n/n!
#include <stdio.h>
void main()
{
	int i,j,fact;
	float sum=0.0;
	
	for(i=1;i<=7;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact = fact*j;
		}
		sum=sum+(float)i/fact;
	}
	printf("1/1! + 2/2! + 3/3! +.....n/n!\n");
	printf("sum of first seven term of given series = %.2f",sum);
}
