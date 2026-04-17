//Swap using pointer 
#include <stdio.h>
void swap(int a, int b){ 
    int temp = a;
    a = b;
    b = temp;
    
}

void swapbyref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}


int main() {
    int a ;
    int b,c ;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);
    printf("Enter choice: 1 for call by value, 2 for call by reference: ");
    scanf("%d", &c);
    switch (c){
    case 1:
        swap(a,b);
        printf("a=%d, b=%d\n ", a,b);
        break;
    case 2:        
        swapbyref(&a,&b);
        printf("a by ref = %d, b by ref = %d ", *a,*b);
        break;
    }
    return 0;
}
