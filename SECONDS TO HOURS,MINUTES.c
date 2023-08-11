#include <stdio.h>

int main()
{
	int sec,hour,min;

	printf("Enter the no.of seconds to be converted : ");
	scanf("%d", &sec);

	hour = sec/3600;

	min = (sec%3600)/60;

    sec = (sec%3600)%60;

	 printf("HOUR(s): %d\n",hour);

    printf("MINUTE(s): %d\n",min);

    printf("SECONDS: %d \n\n",sec);

    printf("        OR        \n\n");

    printf("%dHOUR(s):%dMINUTE(s):%dSECOND(s)\n",hour,min,sec);
;
	getch();

	return 0;
}
