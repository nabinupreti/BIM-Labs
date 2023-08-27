//read a number and print whether  a number is odd or even
//using if else
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is Even number.",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
		
}
