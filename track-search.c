#include <stdio.h>
#include <string.h>

/**
 * A program that searhes for music tracks
 * The program will:
 * (i) Ask the user for the text she/he is looking for,
 * (ii) Look through all of the track names
 * (iii) If a track name contains the search text, it displays the track name.
*/

//An array of strings containing music tracks
char music[][80] = {

    "Mazha haisekwi",
    "Makazvinzwepi",
    "Nyaradzo",
    "Mutoriro town",
    "YakaShaker",
};
//writing a find function
void find_music(char search_for[])
{
	int i;
	for(i=0; i<5; i++){ //looping through the array looking for a match text
	     	if(strstr(music[i], search_for))
			printf("Music %i: '%s'\n", i, music[i]);
	}
}
//Main function
int main ()
{
	char search_for[80];
	printf("Search for: ");
	fgets(search_for, 80, stdin); //user enter input
	find_music(search_for);
  return 0;
}

