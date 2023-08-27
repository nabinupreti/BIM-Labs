/*Sum of 2 integer using n tuples*/
#include <stdio.h>
#include <conio.h>
int inverse(int,int);
void main()
{
	int n1,n2,t1[5],t2[5],i,n,a[5],m[5],M[5],mp=1,y[5],sum;
	int x;
	printf("Enter 2 numbers to add:");
	scanf("%d%d",&n1,&n2);
	printf("How many tuples in tuples reprsentation? ");
	scanf("%d",&n);
	printf("Enter %d pairwise relatively primes moduli:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Modolus%d = ",i+1);
		scanf("%d",&m[i]);
		mp=mp*m[i];
	}
	printf("\nUnique modulo m is %d.\n\n",mp);
	for(i=0;i<n;i++)
	{
		t1[i]=n1%m[i];
		printf("%d mod %d = %d\n",n1,m[i],t1[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		t2[i]=n2%m[i];
		printf("%d mod %d = %d\n",n2,m[i],t2[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		a[i]=((t1[i]+t2[i])%m[i]);
		printf("a%d = %d\n",i+1,a[i]);
	}
	//for M[i]
	printf("\n");
	for(i=0;i<n;i++)
	{
		M[i]=mp/m[i];
		printf("M%d = %d\n",i+1,M[i]);
	}
	printf("\n");
	//for inverse of M[i] modulo m[i] = y[i]
	for(i=0;i<n;i++)
	{
		y[i] = inverse(M[i],m[i]);
		printf("y%d = %d\n",i+1,y[i]);
	}
	//for x
	printf("\n");
	x=0;
	for(i=0;i<n;i++)
	{
		x+=a[i]*M[i]*y[i];
		printf("a%d*M%d*y%d = %d\n",i+1,i+1,i+1,a[i]*M[i]*y[i]);
	}
	printf("___________________________________\nTotal = %d",x);
	sum=x%mp;
	if(x<0)
	{
		x=mp+x;
	}
	printf("\n%d congruent to %d (mod %d)",x,sum,mp);
	printf("\nSum = %d.",sum);
	getch();
}
int inverse(int a,int b)
{
	int q,r,s,t,s1,s2,t1,t2;
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
	s=s2;
	return s;	
}
