#include <stdio.h>
/**
 * 2nd classification
 * With args; no return value
 * Continue with my bithday func
 */
void birthday(char name[], int age)
{
	printf("\n When is your birthday nhai %s?", name);
	printf("\n and your are turning %d years.Right!\n", age);
}
int main ()
{
	char name[] = "Naison";
	int age = 28;
	birthday(name, age);

	return 0;
}
