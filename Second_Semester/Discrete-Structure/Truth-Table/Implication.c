#include <stdio.h>
int Impl(int a, int b){
	if(a==1&&b==0)
	return 0;
	else
	return 1;
}
int main() {
    int a, b;
    printf("Truth Table Implication\n");
    printf("A\tB\tA --> B\n");

    // Iterate over all possible values of a and b (0 or 1)
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d\t%d\t%d\n", a, b, Impl(a,b));
        }
    }

    return 0;
}
