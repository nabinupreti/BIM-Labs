/*
1
1	2
1	2	3
1	2	3	4*/
#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}
