#include <stdio.h>
#include <string.h>
void main()
{
	char a[100];
	int len;
	printf("Enter a string:");
	gets(a);
	len = strlen(a);
	printf("Length of string is %d",len);
}
