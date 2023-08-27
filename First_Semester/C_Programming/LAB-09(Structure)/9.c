#include <stdio.h>
struct customers
{
	char name[50];
	char acc_no[50];
	float bal;
}c[20];
void lessthan200(struct customers c1[20]);
void add100(struct customers c2[20]);
int n=11;
void main()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of customer %d:\n",i+1);
		printf("Name : ");
		fflush(stdin);
		gets(c[i].name);
		printf("Acc no.: ");
		gets(c[i].acc_no);
		printf("Balance : ");
		scanf("%f",&c[i].bal);
	}
	lessthan200(c);
	add100(c);
}
void lessthan200(struct customers c1[20])
{
	int i;
	printf("\nCustomers having balance less than $200 are:\n");
	for(i=0;i<n;i++)
	{
		if(c1[i].bal<200.0)
		{
			printf("%s\n",c1[i].name);
		}
	}
}
void add100(struct customers c2[20])
{
	int i;
	printf("\nIncremented balance after adding $100, who have more than $1000 in their acc:\n");
	printf("NAME\t\t BALANCE\n");
	for(i=0;i<n;i++)
	{
		if(c2[i].bal>1000.0)
		{
			c2[i].bal+=100.0;
			printf("%s\t $%.4f\n",c2[i].name,c2[i].bal);
		}
	}
	
}

