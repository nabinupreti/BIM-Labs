#include <stdio.h>
union members
{
	char firstname[20];
	char middlename[20];
	char lastname[20];
}m;
void main()
{
	printf("Enter Your firstname: ");
	fflush(stdin);
	gets(m.firstname);
	printf("FirstName: %s\n",m.firstname);
	printf("Enter your middlename: ");
	gets(m.middlename);
	printf("MiddleName: %s\n",m.middlename);
	printf("Enter your lastname: ");
	gets(m.lastname);
	printf("LastName: %s\n",m.lastname);
}
