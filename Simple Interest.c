#include <stdio.h>

int main()
{

    double P,T,R;

    printf("Input Principle Amount :");
    scanf("%lf",&P);

    printf("Input Time :");
    scanf("%lf",&T);

    printf("Input Rate of Interest :");
    scanf("%lf",&R);


    double Simple_Interest  = (P*T*R)/100;

    printf("Simple Interest = %lf\n", Simple_Interest);

    return 0;
}
