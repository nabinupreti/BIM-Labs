//asks for three number, determine largest among them
//Using ternary
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c2;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	a>b?a>c?printf("%d is greater",a):
		printf("%c is greater",c):
		b>c?printf("%d is greater",b):
		printf("%d is greater",c);
}
