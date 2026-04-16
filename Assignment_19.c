//structure of employees
#include <stdio.h>
#include <string.h>
#include <time.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[100];
    float salary;
};

struct Employee emp[10];
int n;


void input(){
    printf("Enter number of employees ");
    scanf("%d", &n);
    for (int i = 0; i<n ; i++){
        printf("Name? ");
        scanf(" %[^\n]", emp[i].name);
        printf("Enter date of joining ");
        scanf("%s", emp[i].doj );
        printf("Designation? AM for Asst Manager ");
        scanf(" %[^\n]", emp[i].designation);
        printf("Gender M/F? ");
        scanf(" %c", emp[i].gender);
        printf("Salary ? ");
        scanf(" %f", &emp[i].salary);
    }
}

void gender(){
    int male = 0; int female = 0;
    for (int i = 0; i<n; i++){
        if (strcasecmp(emp[i].gender, "M") == 0)
            male++;
        else if (strcasecmp(emp[i].gender, "f") == 0)
            female++;
        
    }
    printf("Male count = %d\n", male);
    printf("Female count = %d\n", female);
}

void total(){
    printf("Number of employees = %d\n", n);
}

void salary (){
    printf("Employees whose salary > 10,000\n");
    for (int i = 0; i<n; i++){
        if (emp[i].salary > 10000) 
            printf("%s\n", emp[i].name);
    }
}

void AM() {
    printf("Asst managers are\n");
    for (int i = 0; i <n ; i ++){
        if (strcasecmp(emp[i].designation, "AM") == 0){
            printf("%s\n", emp[i].name);
        }
    }
}

int main() {
    
     input();
     printf("---------------------EMPLOYEE DETAILS---------------------------\n");
     gender();
     total();
     salary();
     AM();
    

}
