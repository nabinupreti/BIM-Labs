//use a function called  prime() takes a number as argument
// and returns 0, if the given argument is prime otherwise 1 
#include <stdio.h>
int prime(int num)
{
	int i,flag=0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag++;
			break;
		}
	}
	return flag;
}
void main()
{
	int a,res;
	printf("Enter a number:");
	scanf("%d",&a);
	res=prime(a);
	if(res==0)
	{
		printf("%d is prime number.\n",a);
	}
	else
	{
		printf("%d is not prime number.\n",a);
	}
}
