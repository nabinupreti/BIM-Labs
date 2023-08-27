//first 10 element of Fib sequence
#include<stdio.h>
void fib(int);
void main()
{
	int a=0,b=1;
	printf("First  10 elements of Fibonacci series :");
	printf("%d, %d, ",a,b);
	fib(10);	
}
void fib(int n)
{
	static int a=0,b=1;
	int c;
	if(n>=2)
	{
		c=a+b;
		printf("%d, ",c);
		a=b;
		b=c;
		fib(n-1);
	}
}
