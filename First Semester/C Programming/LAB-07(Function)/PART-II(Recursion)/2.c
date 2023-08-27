//WAP to calculate factorial ou given number using recursive function
#include <stdio.h>
int fact(int);
void main()
{
	int num,res;
	printf("Enter a number:");
	scanf("%d",&num);
	res=fact(num);
	printf("Factorial of %d is %d",num,res);
}
int fact(int i)
{
	if(i<2)
	{
		return 1;
	}
	else
	{
		return i*fact(i-1);
	}
}
