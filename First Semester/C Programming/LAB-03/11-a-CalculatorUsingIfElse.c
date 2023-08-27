#include <stdio.h>
void main()
{
	int a,b,ch;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("------------------------------\n");
	printf("\n1. SUM \n2. DIFFERENCE \n3. MULTIPLICATION \n4. DIVISION \n5. EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	if(ch==1)
		printf("SUM = %d",a+b);
	else if(ch==2)
		printf("DIFFERENCE = %d",a-b);
	else if(ch==3)
		printf("MULTIPLICATION = %d",a*b);
	else if(ch==4)
		printf("DIVISION = %.2f",(float)a/b);
	else if(ch==5)
		exit(0);
	else
		printf("Wrong choice!!");
}
