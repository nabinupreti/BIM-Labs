//Wap to implement recursive algorithm to find factorial of non-ngative integer
#include <stdio.h>
int fact(int);
void main(){
	int n,f;
	printf("Enter a number to find factorial: ");
	scanf("%d",&n);
	if(n<0){
		printf("Negative number do not have factorial.");
	}
	else{
		f = fact(n);
		printf("Factorial of %d is %d.",n,f);
	}
}
int fact(int n){
	int i;
	if(n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
