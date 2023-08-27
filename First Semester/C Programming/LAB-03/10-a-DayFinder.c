//Day finder

#include<stdio.h>
void main()
{
	int a;
	printf("Press '1' for sunday.\n");
	printf("Press '2' for monday.\n");
	printf("Press '3' for tuesday.\n");
	printf("Press '4' for wednesday.\n");
	printf("Press '5' for thursday.\n");
	printf("Press '6' for friday.\n");
	printf("Press '7' for saturday.\n");
	printf("Enter your choice:\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Sunday");
	}
		else if(a==2)
	{
		printf("monday");
	}
	else if(a==3)
	{
		printf("Tuesday");
	}
	else if(a==4)
	{
		printf("Wednesday");
	}
	else if(a==5)
	{
		printf("Thursday");
	}
	else if(a==6)
	{
		printf("Friday");
	}
	else if (a==7)
	{
		printf("Saturday");
	}
	else
	{
		printf("WRONG CHOICE!!");
	}
}
