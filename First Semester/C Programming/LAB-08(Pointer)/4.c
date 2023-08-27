//checks whether an input is number or a character
#include <stdio.h>
void main()
{
	char x;
	char *p=&x;
	printf("Enter a input:");
	scanf("%c",p);
	if(*p>='0' && *p<='9')
	{
		printf("%c is number.\n",*p);
	}
	else
	{
		printf("%c is character.",*p);
	}
}
