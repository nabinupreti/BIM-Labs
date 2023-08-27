//asks for three number. Determine the smallest among them
//using ternary
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	a<b?a<c?printf("%d is smallest",a):
		printf("%c is smallest",c):
		b<c?printf("%d is smallest",b):
		printf("%d is smallest",c);
}
