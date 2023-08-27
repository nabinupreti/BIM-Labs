#include <stdio.h>
struct rainfall
{
	int month[6];
}a[5];
void main()
{
	int i,j,n=5;
	char mon[6][4] = {"Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun"};
	char city[5][20]= {"Kathmandu" , "New Delhi" , "Bankok  " , "Tokyo   " , "Colombo "};
	for(i=0;i<n;i++)
	{
		printf("\nEnter rainfall detail of %s:\n",city[i]);
		for(j=0;j<6;j++)
		{
			printf("%s:",mon[j]);
			scanf("%d",&a[i].month[j]);
		}
	}
	
	//Displaying Info
	printf("\t\t \"Rainfall of the first half of year\"\n");
	printf("---------------------------------------------------------------------\n\t");
	for(i=0;i<6;i++)
	{
		printf("\t%s",mon[i]);
	}
	printf("\n---------------------------------------------------------------------");
	for(i=0;i<n;i++)
	{
		printf("\n%s",city[i]);
		for(j=0;j<6;j++)
		{
			printf("\t%d",a[i].month[j]);
		}
	}
	printf("\n---------------------------------------------------------------------\n");

}
