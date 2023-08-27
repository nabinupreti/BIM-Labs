#include <stdio.h>
void main()
{
	int num,i,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>20)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			printf("%d is prime no. greater than 20.",num);
		}
		else
		{
			printf("%d is >than 20 but not prime no.");
		}
	}
	else
	{
		printf("%d is less than 20.",num);
	}
}
