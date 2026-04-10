//Write a  menu driven program in C to implement the basic arithmetic operations. 
#include <stdio.h>
int main(){
    float a;
    float b;
    int c;
    printf("Enter two numbers ");
    scanf("%f %f", &a, &b);

    printf("Choose\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
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

    default:
    printf("Wrong");
    }
    return 0;
}
