/* Copy the input to the output, 
 * replacing each string of one 
 * or more blanks by a single blank. */

#include <stdio.h>

#define ZERO 0
#define ONE 1

int main(void) {
	int c;
	int isBlank = ZERO;

	while((c = getchar()) != EOF) {
		if (c == ' ')
			++isBlank;
		if (isBlank <= ONE || c != ' ')
			putchar(c);
		if (c != ' ')
			isBlank = ZERO;

	}	

	return ZERO;
}
