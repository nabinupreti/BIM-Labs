/*
ABCDE
ABCD
ABC
AB
A*/
#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
}
