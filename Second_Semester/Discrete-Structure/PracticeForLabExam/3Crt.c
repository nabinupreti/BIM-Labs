//3.	WAP to implement Chinese remainder theorem to solve the system of simultaneous congruence.
#include <stdio.h>
int Inverse(int a,int b){
	int q,r,s,t,s2,s1,t2,t1;
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
void main(){
	int n,i,a[5],m[5],M[5],mp=1,y[5],x=0;
	printf("How many congruence in system for solving? ");
	scanf("%d",&n);
	printf("Enter %d simultaneous congruencies:\n",n);
	for(i=0;i<n;i++){
		printf("For congruence %d:\n",i+1);
		printf("Modolus m%d: ",i+1);
		scanf("%d",&m[i]);
		printf("Residue a%d: ",i+1);
		scanf("%d",&a[i]);
		mp=mp*m[i];
	}
	//for M[]
	for(i=0;i<n;i++){
		M[i]=mp/m[i];
	}
	//for y[]
	for(i=0;i<n;i++){
		y[i]= Inverse(M[i],m[i]);
	}
	//for x
	for(i=0;i<n;i++){
		x+=a[i]*M[i]*y[i];
	}
	x=x%mp;
	if(x<0){
		x=x+mp;
	}
	printf("Smallest required integer is %d",x);
}
