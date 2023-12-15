#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int gcd(int a, int b) {
    int result = 1;
    int limit = min(a, b);

    for (int i = 1; i <= limit; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            result = i; 
        }
    }

    return result;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d using definition method is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

