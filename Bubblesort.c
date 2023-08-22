#include<stdio.h>
void bubbleSort(int *A, int n);
void main(){
    int A[100],n,i;
    printf("\n Input number of elements to sort: ");
    scanf("%d",&n);
    printf("\nInput the elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    bubbleSort(A, n);
}

void bubbleSort(int *A, int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-1-i ; j++)
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}
