//Write a program  in C to generate multiplication tables.
#include <stdio.h>
int main() {
    int n,i;
    i=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", n*i);
        i++;
    } while (i<=10);

    return 0;
    


}
