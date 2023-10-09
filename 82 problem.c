// C program to calculate the value of nCr??

#include <stdio.h>

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
    int n, r;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter the value of R: ");
    scanf("%d", &r);

    int nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("The nCr is: %d\n", nCr);

    return 0;
}
