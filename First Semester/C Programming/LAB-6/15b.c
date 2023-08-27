#include<stdio.h>
#include<string.h>
void main()
{
	char a[50], b[50];
	printf("Enter your first name:");
	gets(a);
	printf("Enter your last name:");
	gets(b);
	printf("After concatination:\n");
	puts(strcat(a,b));
	
}
