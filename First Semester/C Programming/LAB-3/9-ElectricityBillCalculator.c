//Electricity Bill Calculator
#include<stdio.h>
void main()
{
	int u;
	float total;
	printf("Enter your Electricity consumption unit:");
	scanf("%d",&u);
	if(u<=150){
		total = u*3.0;
	}
	else if(u<=350){
		total = 100+150*3.0+(u-150)*3.75;
	}
	else if(u<=450){
		total = 250+150*3.0+200*3.75+(u-350)*4.0;
	}
	else{
		total = 300+150*3.0+200*3.75+100*4.0+(u-450)*4.25;
	}
	printf("__________Electricity Bill___________");
	printf("\n\t%d Unit = Rs.%.2f",u,total);
}
