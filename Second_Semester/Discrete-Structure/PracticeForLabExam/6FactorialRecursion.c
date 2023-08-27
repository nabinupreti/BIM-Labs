//6.	WAP to find the factorial of a number recursion.
#include <stdio.h>
int Fact(int n)
{
	if(n==0){
		return 1;
	}
	else{
		return n*Fact(n-1);
	}
}
void main()
{
	int n,fact;
	printf("Enter a number to find factorial: ");
	scanf("%d",&n);
	fact = Fact(n);
	printf("Factorial of %d is %d",n,fact);
}
