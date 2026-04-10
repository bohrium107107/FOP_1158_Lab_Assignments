// Calculate lcm, gcd of 2 nos or array of nos
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b; // 12 % 9 r=3 // 9 % 3 r=0 //gcd = 3
        a = b;
        b = rem;
    }
    return a;
}

int scd(int a, int b){
    for(int i = 2; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1; // if no divisor other than 1
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // start with first element, then keep updating
    int resultGCD = arr[0];
    int resultLCM = arr[0];
    int resultSCD = arr[0];

    // gcd of 12,18,24,36
    //first 12,18 gcd = 6
    //then 6,24 gcd =6
    //then 6, 36 gcd = 6
    for (int i = 1; i < n; i++) {
        resultGCD = gcd(resultGCD, arr[i]);   // calculate gcd in pairs 
        resultLCM = lcm(resultLCM, arr[i]);   // calculate lcm in pairs
        resultSCD = scd(resultSCD, arr[i]);

    printf("GCD = %d\n", resultGCD);
    printf("LCM = %d\n", resultLCM);
    printf("SCD = %d\n", resultSCD);

    return 0;
}
}