//
#include <stdio.h>
struct information
{
	char name[100];
	float price;
	int id;
}s[10];
void main()
{
	int i;
	FILE *fp;
	fp=fopen("item.txt","w");
	for(i=0;i<3;i++)
	{
		printf("Enter name, ID, and price of product:");
		fflush(stdin);
		gets(s[i].name);
		scanf("%d%f",&s[i].id,&s[i].price);
		fwrite(&s[i],sizeof(s[i]),1,fp);
	}
	printf("Successfully written product information in file.");
}
