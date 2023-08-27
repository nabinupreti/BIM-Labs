//11.	Write a program to show that ((p-->q)^(q-->r))-->(p-->r) is a tautology.
#include <stdio.h>
int And(int a,int b){
	if(a==1&&b==1){
		return 1;
	}
	else{
		return 0;
	}
}
int Impl(int a, int b){
	if(a==1&&b==0){
		return 0;
	}
	else{
		return 1;
	}
}
void main(){
	int p,q,r,a,b,c,d,res,flag=1;
	printf("Truth table of ((p-->q)^(q-->r))-->(p-->r) is:\n\n");
	printf("p\t q\t r\t ((p-->q)^(q-->r))-->(p-->r)\n");
	for(p=0;p<=1;p++){
		for(q=0;q<=1;q++){
			for(r=0;r<=1;r++){
				a=Impl(p,q);
				b=Impl(q,r);
				c=And(a,b);
				d=Impl(p,r);
				res=Impl(c,d);
				printf("%d\t %d\t %d\t %d\n",p,q,r,res);
				if(res==0){
					flag=0;
				}
			}
		}
	}
	if(flag){
		printf("Since all the truth values are TRUE \nSo, ((p-->q)^(q-->r))-->(p-->r) is a Tautology.");
	}
	else{
		printf("Since some of the  truth values are FALSE\nSo, ((p-->q)^(q-->r))-->(p-->r) is not a Tautology.");
	}
}
