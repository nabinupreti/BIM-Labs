#include <stdio.h>
int Or(int a, int b){
	if(a==1||b==1)
	return 1;
	else
	return 0;
}
int main() {
    int a, b;
    printf("Truth Table for Logical OR\n");
    printf("A\tB\tA OR B\n");

    // Iterate over all possible values of a and b (0 or 1)
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d\t%d\t%d\n", a, b, Or(a,b));
        }
    }

    return 0;
}
