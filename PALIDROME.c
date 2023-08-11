#include<stdio.h>

void main()
{
    int n,r,t=0,temp;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;

    while (n!=0)
{
    r=n%10;
    t= (t*10)+r;
    n=n/10;
}

if (t==temp)
    printf("\n %d is a palindrome number", temp);
else
    printf("\n %d is not a palindrome number", temp);

getch();
}
