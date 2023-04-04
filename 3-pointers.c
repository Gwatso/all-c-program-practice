#include <stdio.h>
/*Pointers with arrays
 *
 */

void skip(char* msg)
{
	puts(msg +11);
}
int main()
{
	char *the_text_msg = "You have to start printing";
	skip(the_text_msg);

	return 0;
}
