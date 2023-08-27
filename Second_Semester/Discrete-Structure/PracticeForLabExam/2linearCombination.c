//2.	Write a program to express GCD of 2 integer as linear combination of them using extended Euclidian algorithm.
#include <stdio.h>
void main(){
	int a,b,n1,n2,q,r,gcd,s2,s1,s,t2,t1,t;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	n1=a;
	n2=b;
	if(b==0){
		gcd=a;
		s=1;
		t=0;
	}
	else{
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
		gcd=a;
		s=s2;
		t=t2;
	}
	printf("GCD(%d, %d) is %d\n",n1,n2,gcd);
	printf("%d = (%d * %d) + (%d * %d)",gcd,s,n1,t,n2);
}
