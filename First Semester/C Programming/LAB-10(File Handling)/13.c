#include<stdio.h>
struct college
{
	char name[20];
	char location[20];
	int faculty_no;
};
void main()
{
	struct college col;	
	FILE *fp;
	char c;
	fp = fopen("abc.dat", "wb+");	
	do
	{
		printf("enter college name: ");
		fflush(stdin);
		gets(col.name);
		printf("enter college location: ");
		fflush(stdin);
		gets(col.location);
		printf("enter no of faculties: ");
		scanf("%d",&col.faculty_no);	
		fwrite(&col,sizeof(col),1,fp);
		printf("Want to add another record (y/n)");
		scanf(" %c",&c);	
	}while(c=='y');
	rewind(fp);
	fread(&col,sizeof(col),1,fp);
	printf("name of colleges in kathmandu");
	while(!feof(fp))
	{
		if(strcmp(col.location,"kathmandu")==0)
		{
			
			printf("\ncollege name is %s",col.name);
		}
		fread(&col,sizeof(col),1,fp);	
	}
	fclose(fp);
}


