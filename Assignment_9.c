//Armstrong number is a  number that is equal to the sum of the cubes of its digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153. Write a C program to check if a given number is an Armstrong number or not.
#include <stdio.h>
int main() {
    int n,a;
    int q,r,temp=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    do {
        q = n / 10;
        r = n % 10;
        temp = temp + (r * r * r);
        n = q;
    } while (n > 0);
    if (temp == a) {
        printf("Armstrong number");
    } else {
        printf("Not an Armstrong number");
    }
    return 0;
}
