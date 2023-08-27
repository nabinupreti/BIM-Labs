//read 3 number and print largest number usinf function
//with argument and return type
#include <stdio.h>
int large(int,int,int);
void main()
{
	int a,b,c,lar;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	lar=large(a,b,c);
	printf("Largest number = %d",lar);
}
int large(int x,int y,int z)
{
	int large;
	large=(x>y)?(x>z)?x:z:(y>z)?y:z;
	return large;
//	if(x>y)
//	{
//		if(x>z)
//		return x;
//		else
//		return z;
//	}
//	else
//	{
//		if(y>z)
//		return y;
//		else
//		return z;
//	}
}
