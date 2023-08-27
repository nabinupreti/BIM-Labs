/*Wap to implement recursive algorithm
-to find b^n mod m*/
#include <stdio.h>
int mod_pow(int, int, int);
int main() {
    int a, n, m;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &n, &m);
    printf("%d^%d mod %d is: %d\n", a, n, m, mod_pow(a, n, m));
    return 0;
}

int mod_pow(int a, int n, int m) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int y = mod_pow(a, n / 2, m);
        return (y * y) % m;
    } else {
        int y = mod_pow(a, (n - 1) / 2, m);
        return (a * y * y) % m;
    }
}

