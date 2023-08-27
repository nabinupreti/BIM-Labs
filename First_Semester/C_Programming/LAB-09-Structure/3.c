#include <stdio.h>
struct Employee
{
	int emp_id;
	char emp_name[50],emp_post[50];
	float emp_salary;
}e[10];
void main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter detail of employee %d:\n",i+1);
		printf("Enter Employee ID:");
		scanf("%d",&e[i].emp_id);
		printf("Enter employee name:");
		fflush(stdin);
		gets(e[i].emp_name);
		printf("Enter Post:");
		gets(e[i].emp_post);
		printf("Enter Salary:");
		scanf("%f",&e[i].emp_salary);
	}
	printf("\nDisplaying employee detail:\n");
	printf("Id\t Name\t\t Post\t   Salary\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t %s\t %s\t  %.2f\n",e[i].emp_id,e[i].emp_name,e[i].emp_post,e[i].emp_salary);
	}
}
