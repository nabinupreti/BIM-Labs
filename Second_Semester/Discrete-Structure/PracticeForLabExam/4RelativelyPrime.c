//4.	WAP to check whether the numbers are pairwise relatively prime or not.
#include <stdio.h>
int PRP(int a[], int n){
	int i,j,flag=1;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(GCD(a[i],a[j])!=1){
				flag=0;
				break;
			}
		}
		if(flag==0)
		break;
	}
	return flag;
}
int GCD(int x, int y){
	int r;
	while(y>0){
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}
void main(){
	int a[10],i,n,res;
	printf("How many integer to take PRP? ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	res = PRP(a,n);
	if(res){
		printf("They are PRP");
	}
	else{
		printf("They are not PRP");
	}
}
