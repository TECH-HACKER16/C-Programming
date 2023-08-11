#include<stdio.h>

void main()
{
    int n,r,t=0,k,temp;
    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;
    while(n!=0)
{
    r=n%10;
    k=1;

    while(r!=0)
{
    k=k*r;
    r--;
}
    t=t+k;
    n=n/10;
}

    if(t==temp)
        printf("\n%d is a strong number",temp);
    else
        printf("\n%d is not a strong number",temp);

    getch();
}
