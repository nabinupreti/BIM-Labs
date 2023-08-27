#include <stdio.h>
float avg(int,int,int,int);
void main()
{
	int w,x,y,z;
	printf("Enter 4 numbers:");
	scanf("%d%d%d%d",&w,&x,&y,&z);
	printf("\naverage of odd no. between %d and %d is %.2f.",w,z,avg(w,x,y,z));
}
float avg(int a ,int b ,int c ,int d)
{
	int i,sum=0,count=0;
	printf("Odd numbers are:\n");
	for(i=a;i<=d;i++)
	{
		if(i%2!=0)
		{
			printf("%d, ",i);
			sum+=i;
			count++;
		}
	}
	return (float)sum/count;
}
