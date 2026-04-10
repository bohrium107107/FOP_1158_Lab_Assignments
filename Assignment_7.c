#include <stdio.h>

struct student {
    char name[50];
    int roll_number;
    char clas[10];
    float marks1;
    float marks2;
    float average;
};

int main() {
    struct student s[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", s[i].name); 
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);
    
    
    printf("Enter class: ");
    scanf("%s", s[i].clas);
    
    printf("Enter marks in subject 1: ");
    scanf("%f", &s[i].marks1);
    
    printf("Enter marks in subject 2: ");
    scanf("%f", &s[i].marks2);
    
    s[i].average = (s[i].marks1 + s[i].marks2) / 2;
    
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s[i].name);
    printf("Roll Number: %d\n", s[i].roll_number);
    printf("Class: %s\n", s[i].clas);
    printf("Subject 1 Marks: %.2f\n", s[i].marks1);
    printf("Subject 2 Marks: %.2f\n", s[i].marks2);
    printf("Average Marks: %.2f/100\n", s[i].average);
    
    
    }
return 0;
}