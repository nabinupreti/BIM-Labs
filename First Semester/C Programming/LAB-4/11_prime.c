//read  a num and check prime or not
#include <stdio.h>
void main()
{
	int num,i,flag=0;
	printf("Enter a num to check prime or not:");
	scanf("%d",&num);
	if(num==1)
	{
		printf("1 is neither prime nor composite number");
	}
	else{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d is not prime number.",num);
		}
		else
		{
			printf("%d is prime number.",num);
		}
	}
}
