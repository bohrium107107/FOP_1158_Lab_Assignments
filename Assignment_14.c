#include <stdio.h>

int main()
{
    int  n, temp, decimal=0, base=1;
    printf("Enter a binary number ");
    scanf("%d", &n);
    
    while(n>0){
      temp = n % 10;
      decimal = decimal + (temp*base);
      base = base * 2;
      n = n/10;
    }
    
    printf("%d",decimal);

    return 0;
}
