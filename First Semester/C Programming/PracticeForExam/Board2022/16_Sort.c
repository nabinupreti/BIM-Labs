#include <stdio.h>
void main()
{
	int n[10]={2,9,59,0,36,5,8,3,90,100};
	int i,j,temp;
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	printf("In Ascending order:\n");
	for(i=0;i<10;i++)
	{
		printf("%d, ",n[i]);
	}
	printf("\nIn Decending order:\n");
	for(i=10-1;i>=0;i--)
	{
		printf("%d, ",n[i]);
	}
}
