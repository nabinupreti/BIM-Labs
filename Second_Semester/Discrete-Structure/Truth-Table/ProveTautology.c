// Wap to prove ((p-->q)^(q-->r))-->(p-->r) is a tautology
#include <stdio.h>
int And(int p, int q){
	if(p==1&&q==1)
	return 1;
	else
	return 0;
}
int Impl(int p, int q){
	if(p==1&&q==0)
	return 0;
	else
	return 1;
}
int main() {
    int a, b, c, d, p, q, r;
    int flag = 1;
    printf("Truth Table for ((p-->q)^(q-->r))-->(p-->r) is\n");
    printf("p\t q\t r\t (p-->q)\t (q-->r)\t (p-->r)\t (p-->q)^(q-->r)-->(p-->r)\n");

    // Iterate over all possible values of p, q and r
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for(r = 0; r <= 1; r++){
            	int a = Impl(p,q);
            	int b = Impl(q,r);
            	int c = Impl(p,r);
            	int d = Impl(And(a,b),c);
            	printf("%d\t %d\t %d\t %d\t\t %d\t\t %d\t\t %d\n",p,q,r,a,b,c,d);
            	if (d==0){
            		flag = 0;
				}
			}
        }
    }
	if(flag){
		printf("Since truth value of ((p-->q)^(q-->r))-->(p-->r) if TRUE in all possible cases, \nSo, (p-->q)^(q-->r)-->(p-->r) is a Tautology ");
	}
	else{
		printf("Truth value of (p-->q)^(q-->r)-->(p-->r) is FALSE in some cases, \nSo, (p-->q)^(q-->r)-->(p-->r) is not a Tautology");
	}
    return 0;
}
