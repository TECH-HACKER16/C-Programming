#include <stdio.h>

int main()
{
  auto n1,n2,n3;

    printf("Enter FIRST numbers: ");
    scanf("%d",&n1);

    printf("Enter SECOND numbers: ");
    scanf("%d",&n2);

    printf("Enter THIRD numbers: ");
    scanf("%d",&n3);


  if (n1 >= n2)
{
    if (n1 >= n3)
      printf("\n\n%d is bigger in given data.", n1);

    else
      printf("\n\n%d is bigger in given data.", n3);
}


  else
{
    if (n2 >= n3)
      printf("\n\n%d is bigger in given data.", n2);

    else
      printf("\n\n%d is bigger in given data.", n3);
}
        getch();

        return 0;
}
