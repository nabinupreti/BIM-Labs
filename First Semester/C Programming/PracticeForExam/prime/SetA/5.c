#include <stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("Enter the value of N:");
	scanf("%d",&n);
	f=fact(n-2*2);
	printf("Factorial of (%d-2*2)=%d is %d",n,n-4,f);
}
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	return 1;
}
