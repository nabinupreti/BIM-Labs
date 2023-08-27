#include<stdio.h>
void main()
{
	int a[100],n,i,max,min,sum=0;
	printf("How many person's age you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Age of person %d:",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		//for max age
		if(a[i]>max)
		{
			max=a[i];	
		}
		//for min age	
		if(a[i]<min)
		{
			min=a[i];	
		}			
	}
	printf("Maximum age = %d\n",max);
	printf("Minimum age = %d\n",min);
	printf("Average age = %.2f\n",(float)sum/n);
}
