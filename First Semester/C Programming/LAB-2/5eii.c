//WAP to find whether a given number is positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0)
		printf("Given number is 0");
	else if(num>0)
		printf("%d is positive number",num);
	else
		printf("%d is negative number",num);
}
