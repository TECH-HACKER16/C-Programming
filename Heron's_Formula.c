#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c,s=0,area=0;

     printf("Enter the length of sides of triangle \n");
     scanf("%f %f %f",&a,&b,&c);

     s = (a+b+c)/2.0;
     area = (sqrt)(s*(s-a)*(s-b)*(s-c));

     printf("Area of triangle =\t %f",area);
     return 0;
}
