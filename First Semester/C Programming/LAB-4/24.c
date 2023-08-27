//display the square of intiger from 1-100 except number dividible by 11
#include <stdio.h>
void main()
{
	int i,sum=0;
	printf("The square of intiger from 1-100 except number dividible by 11 are:\n");
	for(i=1;i<=100;i++)
	{
		if(i%11==0)
		{
			printf("\n");
			continue;
		}
		printf("%d, ",i*i);
	}
	
}
