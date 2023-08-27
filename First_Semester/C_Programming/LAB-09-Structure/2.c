#include <stdio.h>
struct Employee
{
	int emp_id;
	char emp_name[50],emp_post[50];
	float emp_salary;
}e;
void main()
{
	printf("Enter Employee ID:");
	scanf("%d",&e.emp_id);
	printf("Enter employee name:");
	fflush(stdin);
	gets(e.emp_name);
	printf("Enter Post:");
	gets(e.emp_post);
	printf("Enter Salary:");
	scanf("%f",&e.emp_salary);
	 
	printf("Displaying employee detail:\n");
	printf("ID : %d\n",e.emp_id);
	printf("Name : %s\n",e.emp_name);
	printf("Post : %s\n",e.emp_post);
	printf("Salary : %.2f",e.emp_salary);
}
