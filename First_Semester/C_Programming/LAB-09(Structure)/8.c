#include <stdio.h>
struct student
{
	int roll;
	char name[20];
	int marks[5];
	int total;
}s[5];
void main()
{
	int i,j,sum=0,n=3;
	float avg[5];
	char s_name[5][20]={"C" , "English" , "Math" , "Mgmt" , "Sans"};
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of student %d\n",i+1);
		printf("Enter Roll No.: ");
		scanf("%d",&s[i].roll);
		printf("Enter Name:");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter marks obtained:\n");
		for(j=0;j<5;j++)
		{
			printf("%s: ",s_name[j]);
			scanf("%d",&s[i].marks[j]);
			sum+=s[i].marks[j];
		}
		s[i].total=sum;
		avg[i]=(float)s[i].total/5;
		sum=0;
	}
		
	printf("\t\t\tDisplaying Detail\n");
	printf("---------------------------------------------------------------------------------------\n");
	printf("Roll\t Name\t\t\t");
	for(i=0;i<5;i++)
	{
		printf("%s\t",s_name[i]);
	}
	printf("Total\tAverage/Per");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t %s\t\t",s[i].roll,s[i].name);
		for(j=0;j<5;j++)
		{
			printf("%d\t",s[i].marks[j]);
		}
		printf("%d\t%.2f",s[i].total,avg[i]);
	}
	printf("\n--------------------------------------------------------------------------------------\n");
	
	printf("\n\t\tDisplaying Detail in decending order\n");
	printf("----------------------------------------------------------------------------------------\n");
	printf("Roll\t Name\t\t\t");
	for(i=0;i<5;i++)
	{
		printf("%s\t",s_name[i]);
	}
	printf("Total\tAverage/Per");
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d\t %s\t\t",s[i].roll,s[i].name);
		for(j=0;j<5;j++)
		{
			printf("%d\t",s[i].marks[j]);
		}
		printf("%d\t%.2f",s[i].total,avg[i]);
	}
	printf("\n----------------------------------------------------------------------------------------\n");

	int top,index=0;
	top=s[0].total;
	for(i=1;i<n;i++)
	{
		if(s[i].total>top)
		{
			top=s[i].total;
			index = i;
		}
	}
	printf("\n___________________TOPPER DETAIL_____________________\n");
	printf("\t\tCONGRATULATIONS, %s!!!! \n\t\tTotal marks = %d.",s[index].name,top);
}

