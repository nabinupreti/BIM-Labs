//input a line and display it characterwise
#include <stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter a line:");
	gets(a);
	printf("Entered line in character wise are:\n");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c, ",a[i]);
	}
}
