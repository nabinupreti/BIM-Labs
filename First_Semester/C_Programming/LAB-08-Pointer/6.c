//accept content of 1-D array called A of size 10
#include <stdio.h>
void main()
{
	int A[10],i;
	int *p;
	p=A;	//p=&A[0];
	printf("enter 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	printf("Displaying contents\n");
	for(i=0;i<10;i++)
	{
		printf("A[%d] = %d\n",i,*(p+i));
	}
}
