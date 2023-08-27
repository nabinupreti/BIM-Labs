//read the age of 'n' students and display the second lowest name
#include <stdio.h>
void lowest(int,int [200]);
void main()
{
	int n,age[200],i;
	printf("How many age you want to enter?");
	scanf("%d",&n);
	printf("max age for students is 100\n");
	printf("Enter the age of %d students:",n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&age[i]);
	}
	lowest(n,age);
}
void lowest(int n,int a[200])
{
	int l1,l2,i;
	l1=l2=100;
	for(i=0;i<n;i++)
	{
		if(a[i]<l1)
		{
			l2=l1;
			l1=a[i];
		}
		else
		{
			if(a[i]>l1 && a[i]<l2)
			l2=a[i];
		}
	}
	printf("Second lowest age is %d",l2);
}
