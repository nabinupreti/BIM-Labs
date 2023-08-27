//WAP to ask user for three digit number and revese it.
#include<stdio.h>
void main()
{
	int num,rev=0,rem;
	printf("Enter three digit number:");
	scanf("%d",&num);
	rem=num%10;
	rev=rev*10+rem;
	num/=10;
	rem=num%10;
	rev=rev*10+rem;
	num/=10;
	rem=num%10;
	rev=rev*10+rem;
	printf("Reversed number = %d",rev);
	
	
}
