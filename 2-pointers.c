/*Size of a pointer and an array
 *
 */
#include <stdio.h>

char s[] = "This is an array";
char *p =s;

int main()
{
	printf("The size of an array is %ld\n", sizeof(s));
	printf("Size of a pointer on 64 bit machine is: %ld\n", sizeof(p));

	return 0;
}
