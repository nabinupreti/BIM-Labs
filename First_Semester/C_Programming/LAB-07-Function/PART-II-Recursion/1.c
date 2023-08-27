//Print name 10 times using recursion 
//using non static variable
#include <stdio.h>
int i=1;
void name(int,char []);
void main()
{
	int i=1;
	char a[100];
	printf("Enter your name:");
	gets(a);
	name(i,a);
}
void name(int i,char n[100])
{
	if(i<=10)
	{
		printf("%d. %s\n",i,n);
		name(i+1,n);
	}
}
