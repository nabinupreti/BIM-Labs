#include<stdio.h>
struct info
{
	char name[100];
	float price;
	int id;
}b[100];
void main()
{
	int i,code;
	FILE *fp;
	printf("Enter product code to search: ");
	scanf("%d",&code);
	fp=fopen("item.txt","r");
	for(i=0;i<10;i++)
	{
		fread(&b[i],sizeof(b[i]),1,fp);
		if(b[i].id==code)
		{	
			printf("Product found!!");
			printf("\nID: %d \nName: %s \nPrice: %.2f\n",b[i].id,b[i].name,b[i].price);	
			break;
		}
	}
	fclose(fp);
}
