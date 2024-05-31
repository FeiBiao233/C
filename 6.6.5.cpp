#include <stdio.h>
int main() {
    FILE *file;
    char line[81]; 
    file = fopen("e:\\bbb.txt", "w"); 
    while (1) {
        fgets(line, sizeof(line), stdin); 
        if (line[0] == '\n') 
            break;
        fputs(line, file); 
    }
    fclose(file); 
    return 0; 
}