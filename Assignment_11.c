#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // a) Square root
    printf("Square root = %.2f\n", sqrt(n));

    // b) Square
    printf("Square = %d\n", n * n);

    // c) Cube
    printf("Cube = %d\n", n * n * n);

    // d) Prime check
    int isPrime = 1;

    if (n <= 1)
        isPrime = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    // e) Factorial
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %lld\n", fact);
    }

    // f) Prime factors
    printf("Prime factors: ");
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}
