#include<stdio.h>
#include<string.h>
void main()
{
	char a[50], b[50];
	printf("Enter your name:");
	gets(a);
	strcpy(b,a);
	printf("After copying:\n");
	puts(b);
}
