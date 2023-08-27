//find sum untill user says yes
#include <stdio.h>
void main()
{
	int a,b;
	char ch;
	do
	{
		printf("\nEnter two numbers:");
		scanf("%d%d",&a,&b);
		printf("sum = %d",a+b);
		printf("\nDo you want to continue(y/n):");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
}
