/*WAP to implement chinese remainder theorem to solve system of simultaenous congruence*/
#include <stdio.h>
#include <conio.h>
int inverse(int,int);
void main()
{
	int i,n,a[5],m[5],M[5],mp=1,y[5],x;
	printf("How many congruence in system for solving?");
	scanf("%d",&n);
	printf("Enter %d simultaneous congruence:",n);
	for(i=0;i<n;i++)
	{
		printf("For congruence%d: \n",i+1);
		printf("Residue a%d : ",i+1);
		scanf("%d",&a[i]);
		printf("Modolus m%d : ",i+1);
		scanf("%d",&m[i]);
		mp=mp*m[i];
	}
	//for M[i]
	for(i=0;i<n;i++)
	{
		M[i]=mp/m[i];
	}
	//for inverse of M[i] modulo m[i] = y[i]
	for(i=0;i<n;i++)
	{
		y[i] = inverse(M[i],m[i]);
	}
	//for x
	x=0;
	for(i=0;i<n;i++) 
	{
		x+=a[i]*M[i]*y[i];
	}
	x=x%mp;
	if(x<0)
	{
		x=mp+x;
	}
	printf("Smallest required integer = %d.",x);
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

