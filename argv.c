#include <stdio.h>
#include <stdlib.h>
/*This program prints out any number entered in the terminal*/
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
