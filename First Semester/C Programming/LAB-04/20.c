#include<stdio.h>
void main()
{
	int a,b;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("\nc. Summation \nd. Sum of Squares \ne. Sum of Cubes \nf. Product \nEnter your choice:");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'c':
			printf("Sum of %d and %d is %d.",a,b,a+b);
			break;
		case 'd':
			printf("Sum of squares of %d and %d is %d.",a,b,a*a+b*b);
			break;
		case 'e':
			printf("Sum of Cubes of %d and %d is %d.",a,b,a*a*a+b*b*b);
			break;
		case 'f':
			printf("Product of %d and %d is %d.",a,b,a*b);
			break;
		default:
			printf("Sorry!! Wrong choice.");
	}
}
