#include<stdio.h>

int main()
{
	int age ;


	printf("Enter your age : ");

	scanf("%d",&age);

	if (age>=18)
		printf("Congrats you are eligible for votting !!\n");

	else
        printf("Sorry, you are eligible for voting \n");

    getch();

	return 0;
}
