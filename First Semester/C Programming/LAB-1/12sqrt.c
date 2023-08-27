//WAP to calculate square root of a number inputted by user
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float num,sr;
	printf("Enter a Number:");
	scanf("%f",&num);
	sr=sqrt(num);
	printf("Square Root of %f is %.2f",num,sr);
	getch;
}
