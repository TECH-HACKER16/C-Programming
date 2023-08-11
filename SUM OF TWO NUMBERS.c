#include <stdio.h>

int main()
{
	int A,B,sum;

    printf("Enter the first number: ");
    scanf("%d",&A);

    printf("\nEnter the second number: ");
    scanf("%d",&B);

    sum = A + B;

    printf("\nSum of two given numbers : %d",sum);

    getch();

    return 0;
}
