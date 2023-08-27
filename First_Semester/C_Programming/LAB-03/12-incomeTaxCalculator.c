//Income After Tax
#include <stdio.h>
void main()
{
	int sal;
	float tax;
	printf("Enter your Annual Salary:");
	scanf("%d",&sal);
	if(sal<=400000){
		tax = sal*0.01;
	}
	else if(sal<=500000){
		tax = 400000*0.01+(sal-400000)*0.10;
	}
	else{
		tax = 400000*0.01+100000*0.10+(sal-500000)*0.20;
	}
	printf("Actual income Annual after deduction of tax is %.2f.",sal-tax);
}
