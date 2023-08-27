//PRIME LESS THAN 100
#include <stdio.h>
void main()
{
	int i,j,count=0;
	printf("Prime number between 1 to 100 are:\n");
	for(i=1;i<=100;i++)	//Checking from 1 - 100
	{
		//Prime Logic
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count == 0)
		{
			printf("%d, ",i);
		}
		count=0;
	}
}
