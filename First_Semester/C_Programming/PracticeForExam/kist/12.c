#include <stdio.h>
void oddeven(int);
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	oddeven(num);
}
oddeven(int a)
{
	if(a%2==0)
	{
		printf("%d is even.",a);
	}
	else
	{
		printf("%d is odd.",a);
	}
}
