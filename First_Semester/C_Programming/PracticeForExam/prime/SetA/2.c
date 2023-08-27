#include <stdio.h>
void main()
{
	int num,rev=0,rem,x;
	printf("Enter a number:");
	scanf("%d",&num);
	x=num;
	if(num%10==0)
	{
		if(num%17==0)
		{
			printf("%d is divisible by 10 and 17.",num);
		}
	}
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==x)
	{
		printf("%d is palindrome.",x);
	}
}
