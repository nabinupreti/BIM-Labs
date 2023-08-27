#include <stdio.h>
struct cources
{
	int id;
	char name[50];
};
void main()
{
	struct cources c[3], *cptr;
	int i;
	cptr=&c[0];
	for(i=0;i<3;i++)
	{
		printf("\nEnter detail of cource %d:\n",i+1);
		printf("Enter cource Id: ");
		scanf("%d",&(cptr+i)->id);
		printf("Enter cource name:");
		fflush(stdin);
		gets((cptr+i)->name);
	}
	printf("\nDisplaying information:\n");
	printf("ID\t COURCE\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t %s\n",(cptr+i)->id,(cptr+i)->name);
	}
}
