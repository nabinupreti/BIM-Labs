//lowercase letter to uppercase and vice versa
#include <stdio.h>
#include <string.h>
void change(char *a);
void main()
{
	char str[100];
	printf("Enter a string:");
	gets(str);
	change(str);
	printf("After changing case: %s",str);
}
void change(char *a)
{
	int i;
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i)>='a' && *(a+i)<='z')
		{
			*(a+i)-=32;
		}
		else if(*(a+i)>='A' && *(a+i)<='Z')
		{
			*(a+i)+=32;
		}
	}
}
