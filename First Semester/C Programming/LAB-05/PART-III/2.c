//read array of 5 numbers and dispalay largest and smallest number
//define read(), largest(), and smallest() function
#include <stdio.h>
void read();
void largest(int []);
void smallest(int []);
void main()
{
	read();
}
void read()
{
	int a[5],i;
	printf("Enter 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	largest(a);
	smallest(a);
}
void largest(int num[5])
{
	int lar=num[0],i;
	for(i=1;i<5;i++)
	{
		if(num[i]>lar)
		{
			lar=num[i];
		}
	}
	printf("Largest number is %d.",lar);
}
void smallest(int num[5])
{
	int small,i;
	small=num[0];
	for(i=1;i<5;i++)
	{
		if(num[i]<small)
		{
			small=num[i];
		}
	}
	printf("\nSmallest number is %d.",small);
}

