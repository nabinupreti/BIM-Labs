#include <stdio.h>
struct student
{
    char name[50];
    int age;
    int roll;
};
// function prototype
void display(struct student );
struct student getInformation();
void main()
{
    struct student s1,s2;
    printf("pass structure to function:");
	printf("\nEnter name: ");
    gets(s1.name);
    printf("Enter age:");
    scanf("%d", &s1.age);
    display(s1);   // passing structure as an argument
    
    s2 = getInformation();//calling function to return structure
    printf("\nDisplaying information\n");
    printf("Name: %s", s2.name);
    printf("\nRoll: %d", s2.roll);
}
void display(struct student s) 
{
  printf("\nDisplaying information\n");
  printf("Name: %s", s.name);
  printf("\nAge: %d", s.age);
}
struct student getInformation() 
{
  struct student r1;
  printf("\n------------------------------------\nreturning structure from function:");
  printf("\nEnter name: ");
  fflush(stdin);
  gets(r1.name);

  printf("Enter roll: ");
  scanf("%d", &r1.roll);
  
  return r1;
}	


