//read 2 number from user and call function add(),subract(),product(),division()
#include <stdio.h>
void add(int,int);
void subtract(int,int);
void product(int,int);
void division(int,int);
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	add(a,b);
	subtract(a,b);
	product(a,b);
	division(a,b);
}
void add(int x, int y)
{
	printf("Sum = %d\n",x+y);
}
void subtract(int x,int y)
{
	printf("Diference = %d\n",x-y);
}
void product(int x,int y)
{
	printf("Multiplication = %d\n",x*y);
}
void division(int i,int j)
{
	printf("Division = %.2f\n",(float)i/j);
}
