#include <stdio.h>
struct BookInfo
{
	int bookId;
	char title[100];
	float price;
}b[100];
void main()
{
	int N,i;
	FILE *fp;
	fp=fopen("book.dat","wb");
	printf("How many Book's detail you want to enter:");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		printf("\nEnter the information of book%d:\n",i+1);
		printf("Enter Book Id:");
		scanf("%d",&b[i].bookId);
		printf("Enter Title:");
		fflush(stdin);
		gets(b[i].title);
		printf("Enter Price:");
		scanf("%f",&b[i].price);
		fwrite(&b[i],sizeof(b[i]),1,fp);
	}
	printf("\nSuccessfully written books information in book.dat\n");
	printf("------------------------------------------------------\n");
	printf("Books having price < 1000 are:\n");
	int sn=1;
	for(i=0;i<N;i++)
	{
		if(b[i].price<1000)
		{
			printf("%d. %s\n",sn,b[i].title);
			sn++;
		}
	}
}
