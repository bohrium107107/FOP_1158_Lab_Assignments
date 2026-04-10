//accept a list of integers and partition it into two lists of even and odd numbers
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);    
    int arr[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }
    printf("Even numbers:\n");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers:\n");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}           