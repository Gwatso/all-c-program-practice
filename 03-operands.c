#include <stdio.h>
/*Comments go here! */
int main()
{
	int m = 10, n = 20, x = 30;
	if (m > n || n != 0) {
	printf("The condition is true:\n ");
	}
	if (x < m && m > n ) {
	printf("The condtion is false\n");
	}	
	if( !((m < x && x !=0) || n > x)) {
	printf("The ! operator reverses results to false\n");
	}
	else {
		printf("Better to print m: %d\n", m);
	}
	return 0;
}
