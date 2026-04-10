//Compute square, square root, cube and cube root of a number, factorial, check if it's prime number, prime factors
#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    int cnt =0;
    printf("Enter a number: ");
    scanf("%lld",&n);
    if (n<0) {
        printf("Invalid input");
        return 0;
    }
    printf("Square: %lld\n",(long long)n*n);
    printf("Square root: %.2f\n",sqrt(n));
    printf("Cube: %lld\n",(long long)n*n*n);
    printf("Cube root: %.2f\n",cbrt(n));
    
    long long fact = 1; 
    for (int i=1; i<=n; i++) {
        fact *= i;
    }
    printf("Factorial: %lld",fact);
    
    if (n <= 1)
        printf("%d is NOT prime", n);
    else {

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        if (cnt > 0)
            printf("\n%d is NOT prime", n);

        else
            printf("\n%d is prime", n);
    }
   return 0; 
    
}
