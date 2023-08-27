/*Wap to implement recursive algorithm
-to find gcd of two numbers*/
#include <stdio.h>
int gcd(int,int);
void main(){
	int a,b,ans;
	printf("Enter the value of a and b to find GCD(a,b):");
	scanf("%d%d",&a,&b);
	ans = gcd(a,b);
	printf("GCD(%d,%d) is %d.",a,b,ans);
}
int gcd(int a,int b){
	if(b==0){
		printf("case b == 0 : \na = %d  b = %d\n",a,b);
		return a;
	}
	else{
		printf("case else: \na = %d  b = %d\n",a,b);
		return gcd(b,a%b);
	}
}
