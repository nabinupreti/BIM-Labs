#include <stdio.h>
void main()
{
	int i;
	printf("Multiples of 5 less than 100 are:\n");
	for(i=1;i<100;i++)
	{
		if(i%5==0)
		{
			printf("%d, ",i);
		}
	}
}
