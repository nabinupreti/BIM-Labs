#include <stdio.h>
void main()
{
	int num,arm=0,rem,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	i=num;
	while(num!=0)
	{
		rem=num%10;
		arm+=rem*rem*rem;
		num/=10;
	}
	if(arm==i)
	{
		printf("ASIAN");
	}
	else
	printf("ASMIT");
}
