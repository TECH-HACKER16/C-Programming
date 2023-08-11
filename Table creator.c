#include <stdio.h>

int main()
{
  int n,m;

  printf("Enter an number : ");

  scanf("%d", &n);

  printf("Enter the no.of multiples you want : ");

  scanf("%d",&m);

  for(int i=1;i <= m;++i)
  {
    printf("%d x %d = %d \n", n,i,n*i);
  }
  return 0;
}
