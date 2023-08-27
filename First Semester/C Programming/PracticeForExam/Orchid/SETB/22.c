#include <stdio.h>
struct emp
{
	char name[50],add[50];
	float sal;
}s[5],a;
void main()
{
	float highsal;
	FILE *fp;
	int index=0;
	fp=fopen("employee.dat","w+");
	int i,n;
	printf("Enter the value of N:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of employee %d:\n",i+1);
		printf("Enter address:");
		fflush(stdin);
		gets(s[i].add);
		printf("Enter name:");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter salary:");
		scanf("%f",&s[i].sal);
		fwrite(&s[i],sizeof(s[i]),1,fp);
	}
	rewind(fp);
	fread(&a,sizeof(a),1,fp);
	{
	printf("\nRecord of highest paid employee:\n");
	highsal=a.sal;
	while(!feof(fp))
	{	
		if(a.sal>highsal)
		{
			highsal=a.sal;
		}
		fread(&a,sizeof(a),1,fp);
	}
	}
	for(i=0;i<n;i++)
	{
		if(s[i].sal==highsal)
		{
			printf("Name = %s",s[i].name);
			printf("\nAddress = %s",s[i].add);
			printf("\nSalary = %.2f",s[i].sal);	
			break;
		}
	}
	fclose(fp);
}
