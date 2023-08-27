//8.	WAP to implements recursive algorithm to find b^a mod m
#include <stdio.h>
int BpowAmodM(int b,int a,int m){
	int y; 
	if(a==0){
		return 1;
	}
	else if(a%2==0){
		y = BpowAmodM(b,a/2,m);
		return (y*y)%m;
	}
	else{
		y = BpowAmodM(b,(a-1)/2,m);
		return (b*y*y)%m;
	}
}
void main(){
	int b,a,m,res;
	printf("Enter the value of b, a, and m :");
	scanf("%d%d%d",&b,&a,&m);
	res = BpowAmodM(b,a,m);
	printf("%d^%d mod %d is %d",b,a,m,res);
}
