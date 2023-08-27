//Two date cannot be added, so difference is

#include <stdio.h>
 struct Date
 {
	int day,month,year;
 }d[3];
 void difference(struct Date d1[3]);
 void main()
 {
 	int i;
	printf("Enter first date:\n");
	for(i=0;i<2;i++)
	{
		printf("Year:");
		scanf("%d",&d[i].year);
		printf("Month:");
		scanf("%d",&d[i].month);
		printf("Day:");
		scanf("%d",&d[i].day);
		printf("\nEnter another date:\n");
	}
	difference(d);
 }
 void difference(struct Date d1[3])
 {
 	
 	if(d1[1].day>d1[0].day)
 	{
 		d1[2].day=d1[1].day-d1[0].day;
	}
 	else
	{
 		d1[1].day+=30;
		d1[1].month--;	
		d1[2].day=d1[1].day-d1[0].day;
	}
	if(d[1].month>d[0].month)
 	{
 		d[2].month=d[1].month-d[0].month;
	}
 	else
	{
 		d1[1].month+=12;
		d1[1].year--;	
		d1[2].month=d[1].month-d1[0].month;
	}
	d1[2].year=d1[1].year-d1[0].year;
	printf("Difference of given date is: \n");
	printf("%d Year \n%d Month \n%d Days",d1[2].year,d1[2].month,d1[2].day);
 }
