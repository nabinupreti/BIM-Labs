/*
55555
4444
333
22
1
*/

#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d ",6-i);
		}
		printf("\n");
	}
}
