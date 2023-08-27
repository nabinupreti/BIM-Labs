//input an intiger and count the number of odd and even digit
#include <stdio.h>
void main()
{
	int i,num,temp,rem,even=0,odd=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		num/=10;
	}
	printf("In Intiger number %d:\n",temp);
	printf("No. of Odd digit = %d\n",odd);
	printf("No. of Even digit = %d",even);
}
