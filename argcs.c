#include <stdio.h>
#include <stdlib.h>
/*This program accepts any number of command line arguments and prints them out
 * */
int main (int argc, char *argv[])
{
       	int count;
        printf(" This program was called with\"%s\". \n", argv[0]);
		if(argc > 1)
		  {
		    for(count = 1; count < argc; count ++)
		      { 									            printf("argv[%d] = %s\n", count, argv[count]);
		       }
	            }
		        else{
			       	printf("The command hand no other arguments,\n");
			     }
			    return 0;
}
