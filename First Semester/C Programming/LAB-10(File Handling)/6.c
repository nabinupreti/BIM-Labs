#include <stdio.h>
void main()
{
	FILE *fp;
	char a[100],b[100];
	int n,n1;
	printf("Enter a string : ");
	gets(a);
	printf("Enter a number: ");
	scanf("%d",&n);
	fp=fopen("file.txt","w+");
//	fputs(a,fp);
//	putw(n,fp);
	fprintf(fp,"%s %d",a,n);
	rewind(fp);
	
//	fgets(b,100,fp);
//	n1=getw(fp);
	fscanf(fp,"%s %d",&b,&n1);
	printf("Content of file:\n");
	printf("String : %s \nIntiger : %d",b,n1);
}
