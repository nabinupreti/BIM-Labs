#include <stdio.h>
void main()
{
	FILE *fp;
	char c,ch;
	printf("Enter a character: ");
	scanf("%c",&c);
	fp=fopen("char.dat","wb+");
	fputc(c,fp);
	rewind(fp);
	ch=fgetc(fp);
	printf("given character is : %c",ch);
	fclose(fp);
}
