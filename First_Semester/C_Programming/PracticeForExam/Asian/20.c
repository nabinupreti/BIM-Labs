#include <stdio.h>
void main()
{
	int a[100],num,i,j,temp;
	printf("How many number do you want to enter:");
	scanf("%d",&num);
	printf("Enter %d numbers:",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	//in decending
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("In decending order:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	}
}
