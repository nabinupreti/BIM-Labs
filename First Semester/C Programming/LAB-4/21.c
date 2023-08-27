//factorial og given number using goto statement
#include <stdio.h>
void main()
{
	int num,fact=1,i;
	printf("Enter a number to find factorial:");
	scanf("%d",&num);
	NABin:
		fact=fact*i;
		i++;
		if(i<=num)
		{
			goto NABin;
		}
	printf("Factorial of %d is %d.",num,fact);
}
