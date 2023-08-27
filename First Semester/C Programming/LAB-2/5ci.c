//read two number, if first is greater display difference, otherwise sum
#include <stdio.h>
void main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	num1>num2?printf("Difference of %d and %d is %d",num1,num2,num1-num2):
		printf("Sum of %d and %d is %d",num1,num2,num1+num2);
}
