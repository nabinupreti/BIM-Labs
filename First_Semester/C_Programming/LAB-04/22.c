//find the number of and sum of all intigers greater than 100 less than 200 that
//are exactly divisible by 7 but not by 5.
#include <stdio.h>
void main()
{
	int i,count=0,sum=0;
	printf("In number between 100-200\n");
	printf("Number that are exactly divisible by 7 but not by 5 are:\n");
	for(i=100;i<=200;i++)
	{
		if(i%7==0)
		{
			if(i%5!=0)
			{
				printf("%d, ",i);
				count++;
				sum=sum+i;
			}
		}
	}
	printf("\n\nNumber of intiger = %d.",count);
	printf("\nSum of them = %d.",sum);
}
