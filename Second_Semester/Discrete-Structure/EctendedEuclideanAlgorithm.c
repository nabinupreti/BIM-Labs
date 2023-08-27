//WAP to express GCD of integers as a linear combination of them
// using extended euclidean algorithm.
#include <stdio.h>
void main()
{
	int a,b,d,s,t,s1,s2,t1,t2,q,r;
	printf("Enter gcd(a,b) to prove it as linear combination of a and b:\n");
	printf("a :");
	scanf("%d",&a);
	printf("b :");
	scanf("%d",&b);
	int n1=a;
	int n2=b;
	if(b==0)
	{
		d=a;
		s=1;
		t=0;
	}
	else
	{
		s2=1;
		s1=0;
		t2=0;
		t1=1;
	while(b>0)
	{
		q=a/b;
		r=a%b;
		s=s2-q*s1;
		t=t2-q*t1;
		a=b;
		b=r;
		s2=s1;
		s1=s;
		t2=t1;
		t1=t;
	}
	d=a;
	s=s2;
	t=t2;
}	
	printf("gcd(%d,%d) = %d\n",n1,n2,d);
	printf("%d = (%d * %d)+ (%d * %d).",d,s,n1,t,n2);
}
