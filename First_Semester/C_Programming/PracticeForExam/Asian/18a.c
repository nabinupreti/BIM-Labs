#include <stdio.h>
void main(int argc , char *argv[])
{
	int a,b,c,sum;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	sum=a+b+c;
	printf("sum of three number is %d",sum);
}
