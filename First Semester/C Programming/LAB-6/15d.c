#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50],tem[50];
	printf("Enter any word for a:");
	gets(a);
	printf("Enter another word for b:");
	gets(b);
	strcpy(tem,a);
	strcpy(a,b);
	strcpy(b,tem);	
	printf("a=%s and b=%s",a,b);
}
