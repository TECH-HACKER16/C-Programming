#include <stdio.h>

int main()
{
    int a[10000],i,n,j,temp;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<n-1; i++)
    {

        for(j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }

        }

    }
    printf("\narray elements in ascending order:\n ");

    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }

 }
