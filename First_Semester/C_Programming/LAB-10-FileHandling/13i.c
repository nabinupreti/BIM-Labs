#include <stdio.h>
#include <string.h>
struct TU
{
	char name[100],loc[100];
	int nf;
};
void main()
{
	struct TU c[10];
	int i,n;
	printf("How many detail you want to enter: ");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("universityii.dat","wb+");
	printf("Enter the detail of %d colleges:\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d. Enter Name, Location and No. of faculty:",i+1);
		fflush(stdin);
		gets(c[i].name);
		gets(c[i].loc);
		scanf("%d",&c[i].nf);
		fwrite(&c[i],sizeof(c[i]),1,fp);
	}
	rewind(fp);
	
	printf("Colleges inside kathmandu valley are:\n");
	fread(&c[i],sizeof(c[i]),1,fp);
	while(!feof(fp))
	{
		if(strcmp(c[i].loc,"kathmandu")==0)
		{
			printf("%s\n",c[i].name);
		}
		fread(&c[i],sizeof(c[i]),1,fp);
	}

}
