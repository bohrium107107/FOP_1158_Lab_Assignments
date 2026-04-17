#include <stdio.h>
#include <stdlib.h>
//copy paste file contents
int main() {
    FILE *source, *destination;
    char ch[100];
    
    
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error: Cannot open source file!");
        return 1;
    }
    
    
    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error: Cannot create destination file!");
        fclose(source);
        return 1;
    }
    
    
    while ((fgets(ch,100,source)) != NULL) {
        fputs(ch, destination);
    }
    
    printf("File copied successfully!");
    
    
    fclose(source);
    fclose(destination);
    
    return 0;
}
