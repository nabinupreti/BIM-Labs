#include <stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char a[100],b[100];
	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","w+");
//	fgets(a,100,fp1);
	while(!feof(fp1))
	{
		fscanf(fp1,"%s",&a);
		fprintf(fp2,"%s",a);
	}
	
	rewind(fp2);
	
//	fgets(b,100,fp2);
printf("Content of file2 are: \n");
while(!feof(fp2))
{
	fscanf(fp2,"%s",&b);
	printf("%s",b);
}
	
	fclose(fp1);
	fclose(fp2);
}
