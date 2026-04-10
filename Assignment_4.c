// Write a C Program to calculate the salary of an employee given his basic pay (taken as input 
//from the user). Calculate gross salary of employee. Let HRA be 10 % of basic pay and TA be 
//5% of basic pay. Let employees pay professional tax as 2% of total salary. Calculate net salary 
//payable after deductions.

#include <stdio.h>
int main() { 
    float bs, gs, ns, hra, ta, tax;
    printf("Enter base salary ");
    scanf("%f", &bs);
    hra = bs * 0.10;
    ta = bs * 0.05;
    gs = bs + hra + ta;
    tax = gs * 0.02;
    ns = gs - tax;
    printf("Gross salary is ₹%.2f\n", gs);
    printf("Net salary is ₹%.2f\n", ns);
    return 0;

}
