//read 1-D array of size n and display
#include <stdio.h>
void main()
{
	int n,i,a[100];
	int *p,*pa;
	p=&n;
	pa=a;
	printf("How many number do you want to enter?");
	scanf("%d",p);
	printf("Enter %d elements:",*p);
	for(i=0;i<n;i++)
	{
		scanf("%d",(pa+i));
	}
	printf("Displaying emements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(pa+i));
	}
	
}
