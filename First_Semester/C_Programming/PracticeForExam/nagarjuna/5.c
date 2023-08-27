#include <stdio.h>
void fib(int);
void main()
{
	int n;
	printf("Upto which term you want fib seres:");
	scanf("%d",&n);
	printf("Fibonacci series upto %dth ter is:\n0,1,",n);
	fib(n-2);   //n-2 because 2 numbers are already printed 
	
}
void fib(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d,",n3);
		fib(n-1);
	}
}
