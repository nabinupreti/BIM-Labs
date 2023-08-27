#include <stdio.h>
void main()
{
	char ch='a';
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
		ch++;
	}
}
