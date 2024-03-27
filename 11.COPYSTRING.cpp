#include <stdio.h>
void stringCopy(char *source, char *destination) {
    if (*source) {
        *destination = *source;
        stringCopy(source + 1, destination + 1);
    } else {
        *destination = '\0'; 
    }
}

int main() {
    char source[] = "Design analysis and algorithms.";
    char destination[100];
    stringCopy(source, destination);
    printf("Copied string: %s\n", destination);

    return 0;
}
