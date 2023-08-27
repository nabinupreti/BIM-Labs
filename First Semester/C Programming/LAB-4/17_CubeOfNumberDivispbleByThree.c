//Accept number 'n' and display the cube of all number from 1-n exactly divisible by 3
#include <stdio.h>
void main()
{
	int n,cbe,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Cube of all number from 1-%d exactly divisible by 3 are: ",n);
	for(i=1;i<=n;i++)
	{
		cbe=i*i*i;
		if(cbe%3==0)
		{
			printf("%d, ",cbe);
		}
	}
}
