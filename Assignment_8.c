//To calculate rank of student  in exam.
#include <stdio.h> 
int main() {
    float a,b,c,d,e;
    printf("Enter marks of 5 subjects out of 100: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    float total = a+b+c+d+e;
    if (total>500 || a>100 || b>100 || c>100 || d>100 || e>100) {
        printf("Invalid input");
        return 0;
    }
    if (total<0 || a<0 || b<0 || c<0 || d<0 || e<0) {
        printf("Invalid input");
        return 0;
    }
    if (a<40 || b<40 || c<40 || d<40 || e<40) {
        printf("Fail");
        return 0;
    }
    if(total>=375) {
        printf("Rank: Distinguished");
    }
    else if(total>=300) {
        printf("Rank: 1");
    }
    else if(total>=250) {
        printf("Rank: 2");
    }
    else if(total>=200) {
        printf("Rank: 3");
    }
    return 0;
}
