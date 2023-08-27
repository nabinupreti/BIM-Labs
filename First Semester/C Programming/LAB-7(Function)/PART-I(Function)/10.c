//WAP that calls a function whose name is reverse() 
//that takes number as argument and returns in reverse order
#include <stdio.h>
int reverse(int);
void main()
{
	int num,res;
	printf("Enter a number:");
	scanf("%d",&num);
	res=reverse(num);
	printf("Reversed number = %d",res);
}
int reverse(int n)
{
	int rem,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	return rev;
}
