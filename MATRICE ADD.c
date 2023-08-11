#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter the first matrix :\n");

    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
        scanf("\t%d",a[i][j]);
}
    printf("\n");
}
    printf("Recheck your matrix");

    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
            printf("\t%d",a[i][j]);
}
}

    printf("Enter the second matrix:\n");

    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
            scanf("\t%d",b[i][j]);
}
    printf("\n");
}
   printf("Recheck your matrix");

    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
            printf("\t%d",b[i][j]);
}
}
    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
            c[i][j]=a[i][j]+b[i][j];
}
}
    printf("Sum of two matrix :");
    for(i=0;i<3;i++)
{
        for(j=0;j<3;j++)
{
            printf("\t%d",c[i][j]);
}
}
getch();
}
