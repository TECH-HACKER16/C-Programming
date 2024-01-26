#include <stdio.h>

int main() {
    char myString[] = "Hello World!";
    int length = 0;

    while (myString[length] != '\0')
    {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
