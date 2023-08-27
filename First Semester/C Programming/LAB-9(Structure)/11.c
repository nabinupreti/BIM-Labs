

#include <stdio.h>
struct employee
{
	char name[50];
	float salary;
	int wrkhr;
}e[10];
void main()
{
	int n=3,i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of employee %d:",i+1);
		printf("\nEnter name: ");
		fflush(stdin);
		gets(e[i].name);
		printf("Enter salary: ");
		scanf("%f",&e[i].salary);
		printf("Enter Working hr per day: ");
		scanf("%d",&e[i].wrkhr);
	}
	for(i=0;i<n;i++)
	{
		if(e[i].wrkhr>=12)
		{
			e[i].salary+=150;
		}
		else if(e[i].wrkhr>=10)
		{
			e[i].salary+=100;
		}
		else if(e[i].wrkhr==8)
		{
			e[i].salary+=50;
		}
	}
	//OUTPUT
	printf("Final salaries: \n");
	printf("NAME \tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%s \t$%.3f\n",e[i].name,e[i].salary);
	}
}

