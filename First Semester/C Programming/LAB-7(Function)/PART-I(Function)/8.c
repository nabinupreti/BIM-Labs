//read a number 'n' from user and print your name 'n' times 
//using function no return type and argument
#include <stdio.h>
void printName(int,char[]);
void main()
{
	int n;
	char name[30];
	printf("Enter your name :");
	gets(name);
	printf("Enter a number:");
	scanf("%d",&n);
	printName(n,name);
}
void printName(int n,char a[30])
{
	int i;
	printf("Showing your name %d times:\n",n);
	for(i=0;i<n;i++)
	{
		puts(a);
	}
	
}
