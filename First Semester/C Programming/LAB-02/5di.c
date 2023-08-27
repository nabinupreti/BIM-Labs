//WAP to read 4 number and print smallest one
#include<stdio.h>
void main()
{
	int a,b,c,d,s1,s2,s;
	printf("Enter four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s1=a<b?a:b;
	s2=c<b?c:d;
	s=s1<s2?s1:s2;
	printf("Smallest among 4 number is %d",s);
}
