//WAP that calls a function whose name is palindrome()
//takes number as argument and check whether it is palindrome or not
#include <stdio.h>
void palindrome(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	palindrome(num);
}
void palindrome(int n)
{
	int temp ,rem,rev=0;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==temp)
	{
		printf("%d is palindrome number.",temp);
	}
	else
	{
		printf("%d is not palindome number.",temp);
	}
}
