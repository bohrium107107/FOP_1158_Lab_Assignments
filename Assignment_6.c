//Calculate factorial 
#include <stdio.h>
int m;
int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  printf("Enter positive number ");
  scanf("%d", &m);
  if (m < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
  printf("Factorial is %d", factorial(m));}
  return 0;
}

/*int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        
        for (i = n; i >= 1; i--) {
            factorial *= i; 
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
*/

