#include <stdio.h>

int main() {
    char myString[] = "level";
    int i=0,j=0;

    while (myString[j] != '\0')
    {
        j++;
    }
        j--;

    while (i < j)
    {
        if (myString[i] != myString[j]) {
            printf("Not a palindrome.\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome.\n");
    return 0;
}
