//Print name 10 times using recursion 
//using static Variable

#include <stdio.h>
void name(char []);
void main()
{
	char a[100];
	printf("Enter your name:");
	gets(a);
	name(a);
}
void name(char n[100])
{
	static int i=1;
	if(i<=10)
	{
		printf("%d. %s\n",i,n);
		i++;
		name(n);
	}
}
