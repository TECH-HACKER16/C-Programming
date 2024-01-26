#include <math.h>
#include <stdio.h>

int main() {
   double number;

   printf("Enter a number: ");
   scanf("%lf", &number);

   printf("Square root of given number is =  %.2lf",sqrt(number));

   return 0;
}
