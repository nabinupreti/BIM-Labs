//9.	WAP to implements recursive algorithm to find b^a
#include <stdio.h>
int Pow(int b, int a){
	if(a==0){
		return 1;
	}
	else{
		return b*Pow(b,a-1);
	}
}
void main(){
	int b,a,res;
	printf("Enter the value of b and a: ");
	scanf("%d%d",&b,&a);
	res = Pow(b,a);
	printf("%d^%d is %d",b,a,res);
}
