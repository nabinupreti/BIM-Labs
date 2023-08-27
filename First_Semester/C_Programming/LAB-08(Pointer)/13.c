//sort the array in ascending order using user defined function 
//prototype: void ascending(int *)
#include <stdio.h>
void ascending(int *);
void main()
{
	int a[5],i,lar;
	printf("Enter 5 number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ascending(a);
	printf("In ascending order:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
void ascending(int *p)
{
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}
