//read array of 5 number and display it
//read() and display() function for process
#include <stdio.h>
void read();
void display(int []);
void main()
{
	read();
}
void read()
{
	int a[5],i;
	printf("Enter 5 numbers in array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	display(a);
}
void display(int arr[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("array[%d] = %d\n",i,arr[i]);
	}
}
