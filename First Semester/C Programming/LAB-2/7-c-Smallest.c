//asks for three number. Determine the smallest among them
//&& operator
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	{
		printf("%d is smallest",a);
	}
	else if(b<a && b<c)
	{
		printf("%d is smallest",b);
	}
	else
	{
		printf("%d is smallest",c);	
	}
}
