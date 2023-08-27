//WAP to find leap year between 1900-2022
#include <stdio.h>
void main()
{
	int i;
	printf("Leap Year between (1900-2022) are: ");
	for(i=1900;i<=2022;i++)
	{
		if(i%4==0)
		{
			if(i%100==0)
			{
				if(i%400==0)
				{
					printf("%d, ",i);
				}
			}
			else
			{
				printf("%d, ",i);
			}
		}
	}
}
