//Accept SP in IC and display SP of item in NRs.
#include<stdio.h>
#include<conio.h>
void main()
{
	int ic;
	float nc;
	printf("Enter SP of item in IC:");
	scanf("%d",&ic);
	nc=ic*1.60;
	printf("%dIC=NRs%.2f",ic,nc);
	getch();
}
