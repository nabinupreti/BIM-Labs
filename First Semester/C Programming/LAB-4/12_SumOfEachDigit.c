//input a num and find the sum of each digit
#include <stdio.h>
void main()
{
	int num,sum=0,rem,x;
	printf("Enter a number:");
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("sum of each digit of %d is %d",x,sum);
}
