//read two 2-D array, multiply them and print the result
#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j,k,sum=0;
	printf("Enter the rows and column of first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the rows and column of second matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2){
		printf("Matrix cant be multiplied with each other.");
	}
	else{
		printf("Enter elements of matrix first:");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter elements of matrix second:");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
		//calculation
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<r2;k++){
					sum+=a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		printf("Multiplication of matrix first and second:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
