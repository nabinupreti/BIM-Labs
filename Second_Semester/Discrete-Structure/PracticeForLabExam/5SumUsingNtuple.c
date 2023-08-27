//5.	WAP to find the sum of two integer working with n tuples and by using moduli.
#include <stdio.h>
int Inverse(int a, int b){
	int s2,s1,s,t2,t1,t,q,r;
	s2=1;
	s1=0;
	t2=0;
	t1=1;
	while(b>0){
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
void main()
{
	int n1,n2,n,m[5],i,t1[5],t2[5],a[5],M[5],y[i],sum,mp=1;
	long int x = 0;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	printf("How many tuples in tuple representation?");
	scanf("%d",&n);
	printf("Enter %d pairwise relatively prime moduli:\n",n);
	for(i=0;i<n;i++){
		printf("Modolus%d: ",i+1);
		scanf("%d",&m[i]);
		mp*=m[i];
	}
	for(i=0;i<n;i++){
		t1[i]=n1%m[i];
		t2[i]=n2%m[i];
		a[i]=(t1[i]+t2[i])%m[i];
		M[i]=mp/m[i];
	}
	for(i=0;i<n;i++){
		y[i]=Inverse(M[i],m[i]);
	}
	for(i=0;i<n;i++){
		x+=a[i]*M[i]*y[i];
	}
	sum=x%mp;
	printf("Sum of %d and %d is %d",n1,n2,sum);
	
}

