//age of 10 person and count the number of person having age group betwee50-60
#include<stdio.h>
void main()
{
	int age,count=0,i;
	for(i=1;i<=10;i++)
	{
		printf("Enter the age of person %d:",i);
		scanf("%d",&age);
		if(age>=50&&age<=60)
		{
			count++;
		}
	}
	printf("No. of person age between 50-60 is %d ",count);
}
