//read 4 digit number and find the sum of square of each digit
#include<stdio.h>
void main()
{
	int num,sum=0,rem;
	printf("Enter four digit number:");
	scanf("%d",&num);
	rem=num%10;
	sum=sum+rem*rem;
	num/=10;
	rem=num%10;
	sum=sum+rem*rem;
	num/=10;
	rem=num%10;
	sum=sum+rem*rem;
	num/=10;
	rem=num%10;
	sum=sum+rem*rem;
	printf("Sum of square of each digit is %d",sum);
	
}
