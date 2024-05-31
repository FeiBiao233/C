#include <stdio.h>

int main() {
    FILE *fileA, *fileB;
    int numA, numB;
    int found;
    fileA = fopen("a.txt", "r"); 
    fileB = fopen("b.txt", "r"); 
    while (fscanf(fileA, "%d", &numA) == 1) {
        found = 0; 
        rewind(fileB);
        while (fscanf(fileB, "%d", &numB) == 1) {
            if (numA == numB) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            printf("%d\n", numA);
        }
    }
    fclose(fileA); 
    fclose(fileB); 
    return 0; 
}
