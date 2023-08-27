#include <stdio.h>
void main()
{
	char ch[100],c[100];
	FILE *fp;
	printf("Enter a line: ");
	gets(ch);
	fp=fopen("line.txt","w+");
	fputs(ch,fp);
	rewind(fp);
	
	printf("Content of file are:\n");
	fgets(c,100,fp);
	printf("%s",c);
	
}
