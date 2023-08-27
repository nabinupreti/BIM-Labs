#include <stdio.h>
#include <string.h>
void main()
{
	char str[100],str1[100];
	printf("Enter a string:");
	gets(str);
	strcpy(str1,str);
	strrev(str1);
	if(strcmp(str,str1)==0)
	printf("Palindrome");
	else
	printf("Not palindrome");
}
