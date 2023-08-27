//Wap to convert hours in to minute, minute into second
#include<stdio.h>
#include<conio.h>
void main()
{
	float hr,min,sec;
//	clrscr();
	printf("Enter time in Hour:");
	scanf("%f",&hr);
	min=hr*60;
	sec=min*60;
	printf("%.2fhour = %.2fminute\n",hr,min);
	printf("%.2fminute = %.2fsecond",min,sec);
	getch();
}
