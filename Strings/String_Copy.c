#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50];
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Copied string: %s\n", destination);
    return 0;
}
