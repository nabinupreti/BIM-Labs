//make a function factorial()
//takeks a number as argument and returns the factorial value
#include <stdio.h>
int factorial(int);
void main()
{
	int num,res;
	printf("Enter a nuber:");
	scanf("%d",&num);
	res=factorial(num);
	printf("Factorial of %d is %d",num,res);
}
int factorial(int n)
{
	int fact=1,i;
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
