//read a number and print its square using function
#include <stdio.h>
void square();
void square()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Square of %d is %d.",n,n*n);
}
void main()
{
	square();
}
