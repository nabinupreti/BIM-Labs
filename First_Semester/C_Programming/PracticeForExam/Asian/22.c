#include <stdio.h>
#include <string.h>
void main()
{
	FILE *fp;
	int i,len;
	char name[20],ch;
	printf("Enter your name:");
	gets(name);
	//menu
	menu:
	system("cls");
	printf("MENU\na. Write your name in file\n");
	printf("b. Print first and last character of name\n");
	printf("c. Print ASCII values of each character of name\n");
	printf("d. Exit \nEnter your choice:");
	scanf(" %c",&ch);
	//
	switch(ch)
	{
		case 'a':
			fp=fopen("myname.txt","w");
			fprintf(fp,"%s",name);
			printf("Success, Written your name in file.");
			break;
		
		case 'b':
			len=strlen(name);
			printf("First character : %c",name[0]);
			printf("\nLast character : %c",name[len-1]);
			break;
		
		case 'c':
			printf("ASCII value of all letter are:");
			for(i=0;name[i]!='\0';i++)
			{
				printf("\n%c = %d",name[i],name[i]);
			}
			break;
		case 'd':
			exit(0);
		default:
			printf("Sorry!!, Wrong choice.");		
	}
	printf("\n\nDo you want to continue menu(y/n):");
	scanf(" %c",&ch);
	if(ch =='y')
	{
		goto menu;
	}	
}
