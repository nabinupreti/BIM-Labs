//Sum and average of all natural number upto n
#include <stdio.h>
void main()
{
	int i,num,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("Sum of all natural number from 1-%d is %d.\n",num,sum);
	printf("Average of all natural number from 1-%d is %.2f.",num,(float)sum/num);
}
