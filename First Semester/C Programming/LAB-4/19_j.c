/*
     1
    22
   333
  4444
 55555*/
#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
