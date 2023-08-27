#include<stdio.h>
void main()
{
	int ch;
	printf("Press '1' for sunday.\n");
	printf("Press '2' for monday.\n");
	printf("Press '3' for tuesday.\n");
	printf("Press '4' for wednesday.\n");
	printf("Press '5' for thursday.\n");
	printf("Press '6' for friday.\n");
	printf("Press '7' for saturday.\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("Sunday.");
		break;
		
		case 2:
		printf("Monday.");
		break;
		
		case 3:
		printf("Tuesday.");
		break;
		
		case 4:
		printf("Wednesday.");
		break;
		
		case 5:
		printf("Thursday.");
		break;	
		
		case 6:
		printf("Friday.");
		break;
		
		case 7:
		printf("Saturday.");
		break;
		
		default:
		printf("You have choosen wrong choice.");
	}
}
