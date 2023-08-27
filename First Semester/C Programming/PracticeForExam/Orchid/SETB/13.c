#include <stdio.h>
void root(int *);	//Function with pointer variable
void main()
{
	int num;
	printf("printf enetr a number:");
	scanf("%d",&num);
	//call by refrence
	root(&num);			//calling function by passing address of (num) to pointer
}
void root(int *a)
{
	int sq;
	sq=sqrt(*a);
	printf("Square root of %d is %d",*a,sq);

}
