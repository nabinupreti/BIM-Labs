#include <stdio.h>
struct employee
{
	char name[50];
	int age;
	float salary;
}e[100];
int main()
{
	int i,n,ch;
	char yn;
	FILE *fp;
	fp=fopen("employee.txt","w");
	printf("How many details? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of employee %d:\n",i+1);
		printf("Enter Employee name:");
		fflush(stdin);
		gets(e[i].name);
		printf("Enter age:");
		scanf("%d",&e[i].age);
		printf("Enter salary:");
		scanf("%f",&e[i].salary);
	}
	//Showing choice
	menu:
	system("cls");
	printf("MENU\n------------------------------------------------------------------------\n");
	printf("1. Display all record\n");
	printf("2. Display record of those whose age is >than 30 and salary is <than 50000\n");
	printf("3. Save all the record file \"emp.dat\"\n");
	printf("4. EXIT\nEnter your choice:");
	scanf("%d",&ch);
	printf("-------------------------------------------------------------------------------\n");
	switch(ch)
	{
		case 1:
			printf("Showing all record:\n");
			printf("NAME \t\tAGE \tSALARY\n");
			for(i=0;i<n;i++)
			{
				printf("%s  \t%d \tRs.%.2f\n",e[i].name,e[i].age,e[i].salary);
			}
			break;
		case 2:
			printf("record of those whose age is >than 30 and salary is <than 50000 are:\n");
			printf("NAME \t\tAGE \tSALARY\n");
			for(i=0;i<n;i++)
			{
				if(e[i].age>30 && e[i].salary<50000)
				printf("%s  \t%d \tRs.%.2f\n",e[i].name,e[i].age,e[i].salary);
			}
			break;
		case 3:
			fwrite(&e,sizeof(e),1,fp);
			printf("Successfully save all record to file.");
			break;
		case 4:
			printf("Are you sure exit?(y/n)");
			scanf(" %c",&yn);
			if(yn =='y')
			{
				exit(0);
			}	
			goto menu;
		default:
			printf("Sorry!! We cannot able to serve you.");
	}
	printf("\nDo you want to continue menu(y/n):");
	scanf(" %c",&yn);
	if(yn =='y')
	{
		goto menu;
	}	
}
