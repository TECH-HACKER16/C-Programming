#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,a[100][100],b[100][100],c[100][100],i,j;

    printf("Enter the number of rows (Max 100): ");
    scanf("%d", &x);

    printf("Enter the number of columns (Max 100): ");
    scanf("%d", &y);

    printf("Enter the first matrix :\n");

    for(i=0;i<x;i++)
{
        for(j=0;j<y;j++)
{
        scanf("\t%d",&a[i][j]);
}
    printf("\n");
}
    printf("Recheck your matrix\n");

    for(i=0;i<x;i++)
{
        for(j=0;j<y;j++)
{
            printf("\t%d",a[i][j]);

}
printf("\n");
}

    printf("\nEnter the second matrix:\n");

    for(i=0;i<x;i++)
{
        for(j=0;j<y;j++)
{
            scanf("\t%d",&b[i][j]);
}
    printf("\n");
}
   printf("Recheck your matrix\n");

    for(i=0;i<x;i++)
{
        for(j=0;j<y;j++)
{
            printf("\t%d",b[i][j]);
}
printf("\n");
}
    for(i=0;i<x;i++)
{
        for(j=0;j<y;j++)
{
            c[i][j]=a[i][j]+b[i][j];
}
}
    printf("\n\nSum of two matrix :\n");
    for(i=0;i<x;i++)
{
        for(j=0;j<y;j++)
{
            printf("\t%d",c[i][j]);
}
printf("\n");
}
getch();
}
