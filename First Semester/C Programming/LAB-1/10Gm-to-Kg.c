//read weight in gram and display how many gram and kilogram are there
#include<stdio.h>
#include<conio.h>
void main()
{
	int gm,kg;
	printf("Enter Weight in Gram:");
	scanf("%d",&gm);
	printf("%dGram = ",gm);
	kg=gm/1000;
	gm=gm%1000;
	printf("%dKg and %dgram",kg,gm);
	getch();
}
