//copy content of one file to another
#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char c,a[100];
	fp1=fopen("char.dat","r");
	fp2=fopen("char1.dat", "w");
	if(fp1==NULL || fp2==NULL)
	{
		printf("Error while opening file!!");
		exit (0);
	}
	else
	{
		fgets(a,100,fp1);
		fputs(a,fp2);
//		while((c=fgetc(fp1))!=EOF)
//		{
//			fputc(c,fp2);
//		}
		printf("Copied");
	}
	fclose(fp1);
	fclose(fp2);
}
