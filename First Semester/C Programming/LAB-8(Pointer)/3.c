//find largest number among 3 number using pointer
#include <stdio.h>
void main()
{
	int a,b,c,lar;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("Enter three numbers:");
	scanf("%d%d%d",p1,p2,p3);
	lar=(*p1>*p2)?(*p1>*p3)?*p1:*p3:(*p2>*p3)?*p2:*p3;
	printf("Largest number = %d.",lar);
}
