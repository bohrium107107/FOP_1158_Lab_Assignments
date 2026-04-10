#include <stdio.h>
#include <string.h>

void displayMenu() {
    printf("\n========== STRING OPERATIONS MENU ==========\n");
    printf("1. Length of string\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare strings\n");
    printf("5. Reverse string\n");
    printf("6. Exit\n");
    printf("=============================================\n");
    printf("Enter your choice: ");
}

int main() {
    char str1[100], str2[100], temp[200];
    int choice;

        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf(" %s", str1);
                printf("Length of \"%s\" = %lu\n", str1, strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf(" %s", str1);
                strcpy(str2, str1);
                printf("Source string : %s\n", str1);
                printf("Copied string : %s\n", str2);
                break;

            case 3:
                printf("Enter first string : ");
                scanf(" %s", str1);
                printf("Enter second string: ");
                scanf(" %s", str2);
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string: %s\n", temp);
                break;

            case 4:
                printf("Enter first string : ");
                scanf(" %s", str1);
                printf("Enter second string: ");
                scanf(" %s", str2);
                int result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are equal.\n");
                else if (result < 0)
                    printf("%s comes before %s alphabetically.\n", str1, str2);
                else
                    printf("%s comes after %s alphabetically.\n", str1, str2);
                break;

            case 5:
    printf("Enter a string: ");
    scanf(" %s", str1);
    int len = strlen(str1);
    char rev[100] = "";
    for (int i = 0; i < len; i++) {
        rev[i] = str1[len - 1 - i];
    }
    rev[len] = '\0';
    printf("Original string : %s\n", str1);
    printf("Reversed string : %s\n", rev);
    break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter 1-6.\n");
        }

    return 0;
}