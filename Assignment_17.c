#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float x, deg, term, sum;

    printf("Enter the angle in degrees: ");
    scanf("%f", &deg);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    x = deg * (3.14159 / 180.0);
    term = x; 
    sum = x;
    for (i = 1; i < n; i++) {
        term = term * (-1 * x * x) / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    printf("\nSum of the sine series up to %d terms: %f", n, sum);
    return 0;
}