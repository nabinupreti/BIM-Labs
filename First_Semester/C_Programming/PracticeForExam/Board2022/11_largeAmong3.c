#include <stdio.h>
int large(int,int,int);
void main()
{
	int a,b,c,l;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	l=large(a,b,c);
	printf("Largest number is %d.",l);
}
int large(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
		{
			return x;
		}
		else
		{
			return z;
		}
	}
	else if(z>y)
	{
		return z;
	}
	else
	return y;
}
