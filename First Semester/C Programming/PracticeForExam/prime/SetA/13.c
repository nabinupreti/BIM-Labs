#include <stdio.h>
struct student
{
	int roll;
	char name[50];
	float per;
}s[5];
void main()
{
	FILE *fp;
	fp=fopen("student.bin","wb");
	int i;
	for(i=0;i<2;i++)
	{
		printf("\nEnter detail of student %d:\n",i+1);
		printf("Enter roll no.:");
		scanf("%d",&s[i].roll);
		printf("Enter name:");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter percentage:");
		scanf("%f",&s[i].per);
	}
	printf("\nStudents having odd roll no., name start with 'R', and per >80 are:\n");
	printf("--------------------------------\nRoll \tName \t\tPercentage\n");
	for(i=0;i<2;i++)
	{
		if(s[i].roll%2!=0)
		{
			if(s[i].name[0]=='R')
			{
				if(s[i].per>80)
				{
					fwrite(&s[i],sizeof(s[i]),1,fp);
					printf("%d \t%s \t%.2f\n",s[i].roll,s[i].name,s[i].per);
				}
			}
		}
		
	}
}
