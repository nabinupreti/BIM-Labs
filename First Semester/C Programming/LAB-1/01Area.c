//WAP to calculate area and circumferenc of circle
#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
int r;
float area,c;
clrscr();
printf("Enter the radius of circle:");
scanf("%d",&r);
area=PI*r*r;
c=2*PI*r;
printf("Area=%.2f \nCircumference=%.2f",area,c);
getch();
}