//student marks obtained in 5 subject.
// display marks as well as total marks,and percentage assuming full marks is 100
#include<conio.h>
#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,tm;
	float per;
//	clrscr();
	printf("Enter marks obtained in subject 1: ");
	scanf("%d",&s1);
	printf("Enter marks obtained in subject 2: ");
	scanf("%d",&s2);
	printf("Enter marks obtained in subject 3: ");
	scanf("%d",&s3);
	printf("Enter marks obtained in subject 4: ");
	scanf("%d",&s4);
	printf("Enter marks obtained in subject 5: ");
	scanf("%d",&s5);
	tm=s1+s2+s3+s4+s5;
	per=(float)tm/5;
	printf("\n__________MARKSHEET_____________");
	printf("\n SUBJECTS\t  OBTAINED MARKS\n");
	printf("--------------------------------\n");
	printf(" Subject 1\t\t %d\n",s1);
	printf(" Subject 2\t\t %d\n",s2);
	printf(" Subject 3\t\t %d\n",s3);
	printf(" Subject 4\t\t %d\n",s4);
	printf(" Subject 5\t\t %d\n",s5);
	printf("--------------------------------\n");
	printf(" Total Marks Obtained\t %d\n",tm);
	printf(" Percentage\t\t %.2f\n",per);
	printf("_________________________________");
	getch();
}
