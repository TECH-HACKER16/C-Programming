#include <stdio.h>
int main()
{
  int n,array[100],temp;

  printf("Enter the number of elements : ");
  scanf("%d",&n);

  for (int i=0;i<n;++i)
{
    printf("Enter your elements %d: ",+i);
    scanf("%d",&array[i]);
}
    for(int i=1;i<n;++i)
{
    if(array[0]<array[i])
{
      temp=array[i];
}
}

  printf("\n\nBiggest number is = %d",temp);

  getch();

  return 0;
}
