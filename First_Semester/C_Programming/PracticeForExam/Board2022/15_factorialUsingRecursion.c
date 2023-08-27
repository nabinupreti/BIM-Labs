#include <stdio.h>
int fact(int);
void main()
{
	int a,f;
	printf("Enter a number:");
	scanf("%d",&a);
	f=fact(a);
	printf("Factorial of %d is %d.",a,f);
}
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);	
	}
	else
	{
		return 1;
	}

}
