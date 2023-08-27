//
#include <stdio.h>
struct student
{
	int roll_no,age,marks;
	char name[30];
}s;
void main()
{
	printf("Enter Roll No:");
	scanf("%d",&s.roll_no);
	printf("Enter Name:");
	fflush(stdin);
	gets(s.name);
	printf("Enter age:");
	scanf("%d",&s.age);
	printf("Enter final marks:");
	scanf("%d",&s.marks);
	//Dsplaying
	printf("\nDsplaying Detail\n");
	printf("Roll.No: %d\n",s.roll_no);
	printf("Name: %s\n",s.name);
	printf("Age: %d\n",s.age);
	printf("Marks: %d",s.marks);	
}
