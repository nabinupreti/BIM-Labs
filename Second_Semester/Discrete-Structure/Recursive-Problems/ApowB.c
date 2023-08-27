/*Wap to implement recursive algorithm
-to find a^n*/
#include <stdio.h>
float power(float,int);
void main(){
	float a;
	int n;
	printf("Enter base: ");
	scanf("%f",&a);
	printf("Enter power: ");
	scanf("%d",&n);
	printf("%.2f^%d is %.2f.",a,n,power(a,n));
}
float power(float a,int n){
	if(n==0){
		return 1;
	}
	else{
		return a*power(a,n-1);
	}
}
