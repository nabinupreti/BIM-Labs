//WAP to read age of three people and find average age
#include<conio.h>
#include<stdio.h>
void main()
{
	int a1,a2,a3;
	float avg;
//	clrscr();
	printf("Enter age of three people:");
	scanf("%d%d%d",&a1,&a2,&a3);
	avg=(float)(a1+a2+a3)/3;
	printf("Average age = %.2f",avg);
	getch();
}
