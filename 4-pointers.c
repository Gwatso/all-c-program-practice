#include <stdio.h>
/*
 * A program that asks users to enter text
 * It will display Full name
 * and a congradulation message for winning lotto
 *
 */

int main()
{
	char name[21];
	int age;

	printf("Full Name: ");
	scanf("%20s", name);
	printf("Age: ");
	scanf("%d", &age);
	printf("Congrats %s your age %d qualifies you to win lotto\n", name, age);

	return 0;
}

