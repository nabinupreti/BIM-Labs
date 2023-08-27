 //WAP that calls a function name interest().
//function takes p,t,r as arhument and return interest
#include <stdio.h>
float interest(float,float,float);
void main()
{
	float p,t,r,intr;
	printf("Enter principle amount, rate of interest, and time in Year:");
	scanf("%f%f%f",&p,&t,&r);
	intr=interest(p,t,r);
	printf("Interst = %.2f",intr);
}
float interest(float a, float b, float c)
{
	float res;
	res = a*b*c/100.0;
	return res;
}
