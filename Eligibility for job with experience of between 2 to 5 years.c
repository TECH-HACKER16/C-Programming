#include<stdio.h>
int main ()
{
    int x;

    printf("ENTER YOUR EXPERIENCE :");
    scanf("%d",&x);

    if((x>2) && (x<5))
    printf("YOUR ARE ELIGIBLE FOR THIS JOB!!");

    else
    printf("SORRY YOUR ARE NOT ELIGIBLE FOR THIS JOB AS EXPERIENCE IS LOW");


    getch();

    return 0;


}
