//WAP to read two numbers and display the greatest of them
#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is greatest Number.",a);
	}
	else
	{
		printf("%d is greatest number.",b);
	}
		
}
