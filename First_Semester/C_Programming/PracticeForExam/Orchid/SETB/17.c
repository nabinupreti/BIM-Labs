#include <stdio.h>
struct employee
{
	char name[100],add[100];
	float salary;
}e;
void main()
{
	char ch,search[100];
	FILE *fp;
	fp=fopen("employee.txt","w+");//file opens in w+ mode to read and write both
	do
	{
		printf("Enter name:");
		fflush(stdin);
		gets(e.name);
		printf("Enter address:");
		gets(e.add);
		printf("Enter salary:");
		scanf("%f",&e.salary);
		fwrite(&e,sizeof(e),1,fp);
		printf("Do you want to continue(y/n):");
		scanf(" %c",&ch);
	}while(ch =='y');
	rewind(fp);
	
	printf("Enter name to search detail:");
	fflush(stdin);
	gets(search);
	
	fread(&e,sizeof(e),1,fp);
	while(!feof(fp))
	{
		if(strcmp(e.name,search)==0)
		{
			printf("\nDetail Matched:\n");
			printf("Name : %s\n",e.name);
			printf("Address : %s\n",e.add);
			printf("Salary : %.2f",e.salary);
			break;
		}
		else
		{
			printf("\nSorry!!,Detail of %s not found!!",search);
		}
		fread(&e,sizeof(e),1,fp);
	}
}
