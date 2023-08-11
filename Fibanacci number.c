#include <stdio.h>

int main()
{
    int n,n1=0,n2=1,next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ",n1,n2);

    for (int i = 3; i <= n; i++)
{
        next = n1 + n2;
        printf("%d, ", next);
        n1 = n2;
        n2 = next;
}

    getch();
}
