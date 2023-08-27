#include <stdio.h>
void main()
{
	char ch[100],c[100];
	FILE *fp;
	fp=fopen("char.dat","ab+");
	printf("Add content in file: ");
	gets(c);
	fputs(c,fp);
	rewind(fp);
	printf("Content of fiLe are:\n");
	fgets(ch,100,fp);
	printf("%s",ch);
	fclose(fp);
}
