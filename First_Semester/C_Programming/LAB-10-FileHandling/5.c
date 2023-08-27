#include <stdio.h>
struct employee
{
	char name[50];
	int age;
	float salary;
}e;
void main()
{
	printf("Enter employee name:");
	fflush(stdin);
	gets(e.name);
	printf("Enter age:");
	scanf("%d",&e.age);
	printf("Enter Salary:");
	scanf("%f",&e.salary);
	FILE *fptr;
	fptr=fopen("employee.dat","wb");
	fprintf(fptr,"%s %d %f",e.name,e.age,e.salary);
	printf("Successfully written detail in employee.dat.");
	
	fclose(fptr);
}
