//take 3*3 matrix and display the sum of each element of matrix
#include <stdio.h>
void main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter the elements of 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	printf("Sum of each element of matrix is %d.",sum);
}
