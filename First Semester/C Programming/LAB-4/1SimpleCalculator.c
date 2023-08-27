//Calculator

#include <stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Press '+' for add \nPress '-' for subract \nPress '*' for multiplication \npress '/' for division\n");
	printf("Enter your choice:");
	scanf (" %c",&ch);
	switch (ch)
	{
		case '+':
			printf("Sum of %d and %d is %d.",a,b,a+b);
			break;
		case '-':
			printf("Difference of %d and %d is %d.",a,b,a-b);
			break;
		case '*':
			printf("Multiplication of %d and %d is %d.",a,b,a*b);
			break;
		case '/':
			printf("division of %d and %d is %d.",a,b,a/b);
			break;
		default:
			printf("Sorry!! Wrong choice");
	}
}
