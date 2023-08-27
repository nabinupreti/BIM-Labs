//Grade Calculator
#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	float per;
	printf("Enter marks of five subjects:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	per=(float)(a+b+c+d+e)/5;
	if(per>=80)
	{
		printf("Grade = A");
	}
	else if(per>=60){
		printf("Grade = B");
	}
	else if(per>=50){
		printf("Grade = C");
	}
	else if(per>=40){
		printf("Grade = D");
	}
	else{
		printf("Grade = F");
	}
	printf("\nPERCENTAGE = %.2f",per);
}
