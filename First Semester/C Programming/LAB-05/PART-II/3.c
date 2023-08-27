//take 3*3 matrix and creates a new matrix by replacing all elements less than 5 by 15
#include <stdio.h>
void main()
{
	int a[3][3],i,j,b[3][3];
	printf("Enter the elements of 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]<5){
				b[i][j]=15;
			}
			else{
				b[i][j]=a[i][j];
			}
		}
	}
	printf("The elements of matrix after calculating:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
