//sort the array in ascending and decending order
#include<stdio.h>
void main()
{
	int n,a[100],i,j,temp;
	printf("How many element you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	//ascending
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	printf("After sorting in ascending order: ");
	for(i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}

	printf("\nAfter sorting in descending order: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d, ",a[i]);
	}
}
