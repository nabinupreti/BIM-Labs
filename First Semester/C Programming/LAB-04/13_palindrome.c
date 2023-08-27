//palindrome or not
#include <stdio.h>
void main()
{
	int num,rev=0,rem,x;
	printf("Enter a number num:");
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==x)
	{	
		printf("%d is palindrome number.",x);
	}
	else
	{
		printf("%d is not palindrome number.",x);
	}
}
