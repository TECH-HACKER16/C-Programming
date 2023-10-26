#include <stdio.h>

int even()
{
    int num;

    printf("Enter an integer : ");
    scanf("%d",&num);

    if ((num & 1 )== 0)
        printf("\n %d is even integer",num);
    else
        printf("\n %d is odd integer",num);
}

int main()
{
    even();

    getch();
}

