#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX 100

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    time_t doj;
    float salary;
};

struct Employee emp[MAX];
int n;

void inputEmployees() {
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); //better than %s as it can read characters until you hit a newline
        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);
        printf("Gender (Male/Female): ");
        scanf(" %s", emp[i].gender);

        struct tm t = {0}; // built-in struct from <time.h>
        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &t.tm_mday, &t.tm_mon, &t.tm_year);
        t.tm_mon -= 1;
        t.tm_year -= 1900;
        emp[i].doj = mktime(&t);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void totalEmployees() {
    printf("\n(a) Total number of employees: %d\n", n);
}

void countByGender() {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(emp[i].gender, "Male") == 0) //compare but ignore case
            male++;
        else if (strcasecmp(emp[i].gender, "Female") == 0) //returns 0 when equal
            female++;
    }
    printf("\n(b) Male employees  : %d\n", male);
    printf("    Female employees: %d\n", female);
}

void salaryAbove10000() {
    printf("\n(c) Employees with salary > 10000:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            char buf[20]; //to store date as string
            strftime(buf, sizeof(buf), "%d/%m/%Y", localtime(&emp[i].doj)); //converts the stored time_t back into a date string:
            printf("    Name: %-20s | Designation: %-20s | DOJ: %s | Salary: %.2f\n",
                   emp[i].name, emp[i].designation, buf, emp[i].salary);
            found++;
        }
    }
    if (found == 0) {
        printf("    No employees found.\n");}
}

void findAsstManager() {
    printf("\n(d) Employees with designation 'Asst Manager':\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(emp[i].designation, "Asst Manager") == 0) {
            char buf[20];
            strftime(buf, sizeof(buf), "%d/%m/%Y", localtime(&emp[i].doj));
            printf("    Name: %-20s | Gender: %-8s | DOJ: %s | Salary: %.2f\n",
                   emp[i].name, emp[i].gender, buf, emp[i].salary);
            found++;
        }
    }
    if (!found)
        printf("    No employees found.\n");
}

int main() {
    printf("========== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
    inputEmployees();

    printf("\n============== RESULTS ==============");
    totalEmployees();
    countByGender();
    salaryAbove10000();
    findAsstManager();

    return 0;
}
