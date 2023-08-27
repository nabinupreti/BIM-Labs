//WAP to find whether a given number is positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	num==0?printf("Given number is 0"):
	num>0?printf("%d is positive number",num):
		printf("%d is negative number",num);
}
