//Calculate nth element of the Fib sequence using recursion
//fib series:0,1,1,2,3,5,8,13,21,34.........n
#include<stdio.h>
int fib(int);
void main()
{
	int n,res;
	printf("enter which term of Fib element you want:");
	scanf("%d",&n);
//	if(n<0)
//	{
//		printf("Negative number dont have fib.");
//	}
//	else
	{
		res=fib(n);
		printf("Fibonacci series of %dth term is %d",n,res);
	}
}
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	{
		return (fib(n-1) + fib(n-2));
	}
}
