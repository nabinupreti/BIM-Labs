/*
 EEEEE
  DDDD
   CCC
    BB
     A*/

#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=6-i;k++)
		{
			printf("%c",'F'-i);
		}
		printf("\n");
	}
}
