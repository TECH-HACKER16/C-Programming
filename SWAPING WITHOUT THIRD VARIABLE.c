#include <stdio.h>

int main(){

    int A = 10,B = 20;

    A = A+B,

    B = A-B;

    A = A-B;

    printf("A = %d \nB = %d ",A,B);

    getch();

    return(0);

}
