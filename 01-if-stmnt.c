#include <stdio.h>
/*Writing the IF Statements
 * Applyig conditions if the citizen is legible to vote
*/

int main()

{
	int age;

	printf("Enter your age: ");
	scanf("%d",&age);

	if (age <=17)
	{
		printf("You look young to cast your vote\n");
	}else if (age >= 18)
	{
		printf("You have the right to vote in this 2023 election\n");
	}else
	{
		printf("You are not a citizen\n"); 
	  
	}	       
	return (0);
}
