//WAP to read 4 number and print smallest one
#include<stdio.h>
void main()
{
	int a,b,c,d,s1,s2;
	printf("Enter four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b)
	{
		s1=a;
	}
	else
	{
		s1=b;
	}
	if(c<d)
	{
		s2=c;
	}
	else
	{
		s2=d;
	}
	if(s1<s2)
	{
		printf("Smallest among 4 number is %d",s1);
	}
	else
	{
		printf("Smallest among 4 number is %d",s2);
	}
	
}
