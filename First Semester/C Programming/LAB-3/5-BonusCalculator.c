/*
Bonus%
10%  => Female worker
5%   => Male worker
if salary<10000 extra 2% bonus
*/
#include<stdio.h>
void main()
{
	int sal;
	char g;
	float bonus;
	printf("Enter your salary:");
	scanf("%d",&sal);
	printf("Enter your Gender(m/f):");
	scanf(" %c",&g);
	if(g=='m'||g=='M'){
		bonus=0.05*sal;
	}
	else{
		bonus=0.10*sal;	
	}
	if(sal<10000){
		bonus+=0.02*sal;
	}
	printf("Total salary after bonus = %.2f",sal+bonus);
}

