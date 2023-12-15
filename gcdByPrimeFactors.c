#include <stdio.h>

// find min
int min(int a, int b) {
    return (a < b) ? a : b;
}

int gcd(int a, int b) {
    int result = 1;
    int limit = min(a, b);

    for (int i = 2; i <= limit; i++) {
        while ((a % i == 0) && (b % i == 0)) {
            result *= i;
            a /= i;
            b /= i;
        }
    }

    return result;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d using prime factors is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

