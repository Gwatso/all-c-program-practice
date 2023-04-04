#include <stdio.h>

int main()
{
	int a; //declaring variable
	int *p; //declaring a pointer variable
	
	p = &a;//assigning variable
	a = 5; // assign a = 5;
	printf( "a is located on this address: %p\n",p);
	printf("&a also print the address of a: = :%p\n", &a);
	printf("address of p: %p\n",&p);
	printf("%d\n Derefencing ", *p);
	printf("a: %d\n", a);

	return 0;
}
