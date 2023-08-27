//b. Argument and return type
#include <stdio.h>
int cbe(int);	//function prototype
int cube(int a)	//function definition
{
	return a*a*a;
}
void main()
{
	int n,res;
	printf("Enter a number:");
	scanf("%d",&n);
	res=cube(n);
	printf("cube root of %d is %d",n,res);
}
