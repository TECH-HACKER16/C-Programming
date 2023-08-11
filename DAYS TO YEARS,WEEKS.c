#include <stdio.h>

int main()
{
    int days,weeks,years,month;

    printf("Enter the no.of days to be converted: ");

    scanf("%d",&days);


    years = (days / 365);
    weeks = (days % 365) / 7;
    month = (int)days/30;
    days  = (days % 365) %7;

    printf("Year(s): %d\n\n",years);

    printf("Month(s): %d\n\n",month);

    printf("Week(s): %d\n\n",weeks);

    printf("Day(s): %d \n\n",days);

    getch();

    return 0;
}
