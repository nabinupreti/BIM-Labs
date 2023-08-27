#include <stdio.h>
#include <string.h>
struct employee
{
	char name[50];
	int id;
	char ofname[50];
	char occ[50];
};
void main()
{
	struct employee e;
	FILE *fp;
	char c;
	fp=fopen("employeeinfo.dat","wb+");
	do
	{
		printf("Enter identification No.: ");
		scanf("%d",&e.id);
		printf("Enter name: ");
		fflush(stdin);
		gets(e.name);
		printf("Enter Office name: ");
		fflush(stdin);
		gets(e.ofname);
		printf("Enter occupation: ");
		fflush(stdin);
		gets(e.occ);
		fwrite(&e,sizeof(e),1,fp);
		printf("Do you want to add another record(Y/N): ");
		scanf("%c",&c);
	}while(c=='y');
	rewind(fp);
	
	printf("-------------------------------------------------------");
	printf("\nEmployees who are manager of NCCS College are:\n");
	fread(&e,sizeof(e),1,fp);
	while(!feof(fp))
	{
		if(strcmp(e.ofname,"nccs")==0)
		{
			if(strcmp(e.occ,"manager")==0)
			{
				printf("%s\n",e.name);
			}

		}
		fread(&e,sizeof(e),1,fp);
	}
	fclose(fp);
}
