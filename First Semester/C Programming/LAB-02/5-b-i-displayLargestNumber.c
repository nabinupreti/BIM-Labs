//WAP to read two numbers and display the greatest of them
#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	a>b?printf("%d is greatest Number.",a):
		printf("%d is greatest number.",b);
}
