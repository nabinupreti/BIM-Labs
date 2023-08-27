//mul() function that takes an argument and print the multiplicatio table of inputted number
#include <stdio.h>
void mul(int);
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Multiplication table of %d is:\n",n);
	mul(n);
}
void mul(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
}
