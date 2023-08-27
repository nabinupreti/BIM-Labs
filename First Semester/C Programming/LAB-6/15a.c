#include<stdio.h>
#include<string.h>
void main()
{
	char s[50];
	int res;
	printf("Enter a sentence:");
	gets(s);
	res=strlen(s);
	printf("No. of character = %d",res);
}
