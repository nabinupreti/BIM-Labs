//Use a function called Armstrong()
//take a number as input and check wheather it is armstrong or not
#include <stdio.h>
void Armstrong(int);
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	Armstrong(num);
}
void Armstrong(int num)
{
	int temp,rem, arm=0;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		arm+=rem*rem*rem;
		num/=10;	
	}
	if(temp==arm)
	{
		printf("%d is Armstrong number.",temp);
	}
	else
	{
		printf("%d is not Armstrong number.",temp);
	}
}
