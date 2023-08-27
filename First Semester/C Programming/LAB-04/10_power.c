#include<stdio.h>
void main()
{
	int base,exp,res=1,e;
	printf("Enter two number(base,exponent):");
	scanf("%d%d",&base,&exp);
	e=exp;
	while(exp!=0)
	{
		res=res*base;
		exp--;
	}
	printf("Power result of (%d^%d) is %d",base,e,res);
}
