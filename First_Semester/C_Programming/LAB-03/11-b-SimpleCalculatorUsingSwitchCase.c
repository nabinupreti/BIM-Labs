//Simple Calculator
#include <stdio.h>
void main()
{
	int a,b,ch;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	printf("\n1. SUM \n2. DIFFERENCE \n3. MULTIPLICATION \n4. DIVISION \n5. EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("SUM = %d",a+b);
			break;
		case 2:
			printf("DIFFERENCE = %d",a-b);
			break;
		case 3:
			printf("MULTIPLICATION = %d",a*b);
			break;
		case 4:
			printf("DIVISION = %.2f",(float)a/b);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Wrong choice!!");
	}
}
