/* Checks planet names */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main (int argc, char *argv[]){

	/* I simply converted the first string to upper */
	for (int i = 1; i < argc; i++){
		argv[i][0] = toupper(argv[i][0]);
	}

	char *planets[]  = {
		"Mercury", "Venus", "Earth", 
		"Mars", "Jupiter", "Saturn", 
		"Uranus", "Neptune", "Pluto"
	};

	int i,j;

	for (i = 1; i < argc; i++) {
		for (j = 0; i < NUM_PLANETS; j++)
			if ( strcmp(argv[i], planets[j]) == 0  ) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		if (j == NUM_PLANETS){
			printf("%s is not a planet\n", argv[i]);
		}
	}

	return 0;
}
