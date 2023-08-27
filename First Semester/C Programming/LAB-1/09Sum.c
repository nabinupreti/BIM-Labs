//Read 3 digit num and find sum of 3 digits
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,rem;
	printf("Enter 3 digit number:");
	scanf("%d",&num);
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	rem=num%10;
	sum=sum+rem;
	printf("Sum of Three digit is %d",sum);
	getch();
}
