#include <stdio.h>
struct Date
{
	int day,month,year;
}d1;
void main()
{
	printf("Enter current date:\n");
	printf("Year : ");
	scanf("%d",&d1.year);
	printf("Month: ");
	scanf("%d",&d1.month);
	printf("Day  : ");
	scanf("%d",&d1.day);
	d1.month++;
	d1.day+=15;
	
	if(d1.day>30)
	{
		d1.month++;
		d1.day-=30;
	}
	if(d1.month>12)
	{
		d1.year++;
		d1.month-=12;
	}
	printf("\nFinal date after adding 45 days is\n");
	printf("Year  = %d\n",d1.year);
	printf("Month = %d\n",d1.month);
	printf("Day   = %d",d1.day);
}
