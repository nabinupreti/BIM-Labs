//armstrong or not
#include <stdio.h>
void main()
{
	int num,sum=0,rem,x;
	printf("Enter a number 3 digit num:");
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem*rem*rem;
		num/=10;
	}
	if(sum==x)
	{	
		printf("%d is armstrong number.",x);
	}
	else
	{
		printf("%d is not armstrong number.",x);
	}
}
