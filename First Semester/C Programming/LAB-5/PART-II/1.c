//take 3*3 matrix and display it
#include <stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("Enter the elements of 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements of 3*3 matrix are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
