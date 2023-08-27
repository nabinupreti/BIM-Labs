#include <stdio.h>
struct information
{
	char name[100];
	float price;
	int id;
}s;
void main()
{
	int i=0,a[100],count=0;
	char ch,nam[100],phone[20];
	float sum=0.0;
	FILE *fp;
	fp=fopen("item.txt","r");
	do
	{
		printf("Enter id of product: ");
		scanf("%d",&a[i]);
		i++;
		count++;
		printf("You wanna buy another(y/n):");
		fflush(stdin);
		scanf(" %c",&ch);
	}while(ch=='y');
	printf("Enter your name: ");
	fflush(stdin);
	gets(nam);
	printf("Phone no.: ");
	gets(phone);
	//generating bill
	printf("\n\t\tPRODUCT BILL\n \tUPRETI STATIONARY SUPPLIERS\n");
	printf("------------------------------------------------\n");
	printf("Name: %s",nam);
	printf("\nPhone No.: %s",phone);
	printf("\n--------------------------------------------------");
	printf("\nS.N \tProduct \tRate");
	for(i=0;i<count;i++)
	{
		while(!feof(fp))
		{
			fread(&s,sizeof(s),1,fp);
			if(s.id==a[i])
			{
				printf("\n%d \t%s  \t%.2f",i+1,s.name,s.price);
				sum+=s.price;
				break;
			}		
		}
		rewind(fp);
	}
	printf("\nTotal price:------------%.2f\n",sum);
	printf("*********Thank You!!**********");
	fclose(fp);
}
