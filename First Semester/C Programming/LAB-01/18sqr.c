//WAP to find square and cube of given number
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sqr,cbe;
//	clrscr();
	printf("Enter a Number:");
	scanf("%d",&num);
	sqr=num*num;
	cbe=sqr*num;
	printf("Square of %d is %d.\n",num,sqr);
	printf("Cube of %d is %d.",num,cbe);
	getch();
}
