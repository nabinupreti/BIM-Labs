//find all armstrong num between 100-500
#include <stdio.h>
void main()
{
	int sum,rem,i=100,num;
	printf("Armstrong number between 100-500 are: ");
	while(i<=500)
	{
		num=i;
		sum=0;
		while(num!=0)
		{
			rem=num%10;
			sum+=rem*rem*rem;
			num/=10;
		}
		if(sum==i)
		{	
			printf("%d ,",i);
		}
		i++;
	}
}
