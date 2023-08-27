//find largest number of an array user defined function
//prototype: int largest(int *)
#include <stdio.h>
int largest(int *);
void main()
{
	int a[5],i,lar;
	printf("Enter 5 number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	lar=largest(&a[0]);
	printf("Largest number is %d.",lar);
}
int largest(int *p)
{
	int i,lar;
	lar=*(p+0);
	for(i=1;i<5;i++)
	{
		lar=*(p+i)>lar?*(p+i):lar;
	}
	return lar;
}
