#include <stdio.h>
#include <string.h> 
 //Calculate length of string ii. String reversal iii. Equality check of two strings 
//iii. Check palindrome iv. Check substring 
int main() {
    char str1[50];
    char str[50];
    char str3[50];
    char str4[50];
    char str11[50], str2[50];
    int k, j;
    int s;
    int i;

    printf("Enter string ");
    scanf("%s", str1);
    s = strlen(str1);
    printf("Length of string is:%d\n", s);
   
    printf("Reverse string is ");
    for(i = s-1; i >= 0; i--)
    {
    str[s-1-i] = str1[i];
    }
    str[s] = '\0';

    printf(str);

    (strcmp(str1, str) == 0) ? printf("\nIt is a palindrome.") : printf("\nNot a palindrome.\n");

    

    printf("Enter main string: ");
    scanf("%s", str11);

    printf("Enter string to check: ");
    scanf("%s", str2);

    for(k = 0; str11[k] != '\0'; k++)
    {
        j = 0;

        while(str2[j] != '\0' && str11[k + j] == str2[j])
        {
            j++;
        }

        if(str2[j] == '\0')
        {
            printf("It is a substring\n");
            return 0;
        }
    }

    printf("Not a substring\n");

    
    printf("Enter another string: ");
    scanf("%s", str3);
    printf("Enter the last string: ");
    scanf("%s", str4);
    (strcmp(str3, str4) == 0) ? printf("They are equal strings.") : printf("They are unequal strings.\n");
    

    return 0;


}
