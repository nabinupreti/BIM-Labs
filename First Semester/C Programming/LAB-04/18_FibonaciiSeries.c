//Fibonacci series up to nth term
#include <stdio.h>
void main()
{
	int term,a=0,b=1,c,i;
	printf("Enter upto which term you want FIBONACCI series: ");
	scanf("%d",&term);
	printf("FIBONACCI series upto %d term are: %d, %d, ",term,a,b);
	for(i=2;i<term;i++)
	{
		c=a+b;
		printf("%d, ",c);
		a=b;
		b=c;
	}
}
