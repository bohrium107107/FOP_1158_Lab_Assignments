#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
    int i, n;

    printf("How many random numbers to generate: ");
    scanf("%d", &n);

    srand(time(0));   // seed for random numbers

    printf("Random numbers are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", rand());
        //break;
    }
    return 0;
    
}
