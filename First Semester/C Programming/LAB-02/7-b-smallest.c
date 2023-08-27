//asks for three number. Determine the smallest among them
//using nested if
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is smallest",a);
		}
		else
		{
			printf("%c is smallest",c);
		}
	}
	else if(b<c)
	{
		printf("%d is smallest",b);
	}
	else
	{
		printf("%d is smallest",c);	
	}
}
