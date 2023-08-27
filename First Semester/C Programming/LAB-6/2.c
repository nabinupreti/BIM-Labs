//display array in backwards
#include <stdio.h>
//#include <string.h>
void main()
{
	char a[100],temp;
	int i,len=0;
	printf("Enter a line:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("Entered line in backward are:\n");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
