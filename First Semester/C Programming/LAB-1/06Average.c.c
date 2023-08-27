//program that accepts three number and display the average
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	float avg;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3.0;
	printf("Average = %.2f",avg);
}
