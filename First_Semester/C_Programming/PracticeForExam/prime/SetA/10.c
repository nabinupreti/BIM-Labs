#include <stdio.h>
void main()
{
	int p[3][3]={1,1,1,1,1,1,1,1,1};
	int q[3][3]={1,1,1,1,1,1,1,1,1};
	int sum=0,i,j,k,res[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum+=p[i][k]*q[k][j];
			}
			res[i][j]=sum;
			sum=0;
		}
	}
	printf("Multiplication(P*Q):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
}
