#include<stdio.h>
#include<string.h>
void main()
{
	char a[50], b[50];
	printf("Enter a word:");
	gets(a);
	printf("Enter another word:");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("equal");
	}
	else
	{
		printf("Not Equal");
	}	
}
