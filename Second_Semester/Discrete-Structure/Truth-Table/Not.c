#include <stdio.h>
int Not(int a){
	if(a==1)
	return 0;
	else
	return 1;
}
int main() {
    int a;
    printf("Truth Table for Logical Not\n");
    printf("A\t~A");

    // Iterate over all possible values of a 
    for (a = 0; a <= 1; a++) {
       printf("\n%d\t%d",a,Not(a));
       
    }

    return 0;
}
