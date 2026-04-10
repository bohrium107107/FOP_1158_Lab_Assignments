//  Calculator with factorial and exponent
#include <stdio.h>
#include <math.h>
int main(){
    float a;
    float b;
    int c;
    printf("Enter two numbers ");
    scanf("%f %f", &a, &b);

    printf("Choose\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial of first number\n6. Exponentiation (first number raised to second number)\n");
    scanf("%d", &c);
    switch (c)
    {case 1:
    printf("%.2f", a+b);
    break;

    case 2:
    printf("%.2f", a-b);
    break;

    case 3:
    printf("%.2f", a*b);
    break;

    case 4:
    if (b == 0) {
        printf("Don't divide by zero");
        return 0;
    } else {
    printf("%.2f", a/b);}
    break;

    case 5: {
        if (a < 0 || (int)a != a) {
            printf("Factorial is not defined for negative numbers or non-integers.");
            return 0;
        }
        int fact = 1;
        for (int i = 1; i <= (int)a; i++) {
            fact *= i;
        }
        printf("%d", fact);
        break;
    }

    case 6:
        printf("%.2f", pow(a, b));
        break;

    default:
    printf("Wrong");
    }
    return 0;
}
