//read a number and print whether  a number is odd or even
//using ternary
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	(num%2==0)?printf("%d is Even number.",num):
		printf("%d is odd number",num);
}
