//read line of text and print into reverse order
#include<stdio.h>
#include<string.h>
void rev(int,char []);
void main()
{
	char line[100],len;
	printf("Enter a line:");
	gets(line);
	len=strlen(line);
	rev(len-1,line);
}
void rev(int len,char a[100])
{	
	if(len>=0)
	{
		printf("%c",a[len]);
		len--;
		rev(len,a);
	}
	
}
