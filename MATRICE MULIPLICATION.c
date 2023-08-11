#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,a[100][100],b[100][100],c[100][100],i,j,k;

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
    printf("Product of the matrix=\n");

    for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
{
    c[i][j]=0;

    for(k=0;k<y;k++)
{
    c[i][j]+=a[i][k]*b[k][j];
}
}
}
    //for printing result
    for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
{
    printf("%d\t",c[i][j]);
}
    printf("\n");
}
    getch();
}
