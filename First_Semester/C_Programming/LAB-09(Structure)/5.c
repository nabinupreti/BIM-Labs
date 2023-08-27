#include <stdio.h>
struct student
{
	char name[50];
	int age;
}s[5];
void main()
{
	int i;
	printf("\nenter the detail of 5 student:\n");
	for(i=0;i<3;i++)
	{
		printf("\nRoll = %d\n",i+1);
		printf("Enter name = ");
		fflush(stdin);
		gets(s[i].name);
		printf("enter age = ");
		scanf("%d",&s[i].age);
	}
	printf("\nDetail of student having Roll no.2:\n");
	printf("Name = %s",s[1].name);
	printf("\nAge = %d",s[1].age);
}
