//read mp of radio , find discount 30% of mp find actual sp of radio
#include<stdio.h>
#include<conio.h>
void main()
{
	int mp;
	float d,sp;
	//clrscr();
	printf("Enter Marked Price of Radio: Rs.");
	scanf("%d",&mp);
	d=0.3*mp;
	sp=mp-d;
	printf("Discount amount = Rs.%.2f\n",d);
	printf("Selling Price after discount = Rs.%.2f",sp);
	getch();
}
