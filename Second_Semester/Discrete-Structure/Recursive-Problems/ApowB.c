/*Wap to implement recursive algorithm
-to find a^b*/
#include <stdio.h>
float power(float,int);
void main(){
	float a;
	int b;
	printf("Enter base: ");
	scanf("%f",&a);
	printf("Enter power: ");
	scanf("%d",&b);
	printf("%.2f^%d is %.2f.",a,b,power(a,b));
}
float power(float a,int b){
	if(b==0){
		return 1;
	}
	else{
		return a*power(a,b-1);
	}
}
