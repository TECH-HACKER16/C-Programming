#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    if (str1[i] == str2[i])
    {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
