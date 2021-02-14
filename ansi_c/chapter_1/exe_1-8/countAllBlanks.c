// This program counts all blanks, tabs and newlines.

#include <stdio.h>

#define ZERO 0

int main(void) {
    int input;
    int blanks, tabs, newlines;
    blanks = tabs = newlines = ZERO;

    while ((input = getchar()) != EOF) {
        if (input == ' ')
            blanks++;
        else if (input == '\t')
            tabs++;
        else if (input == '\n')
            newlines++;
    }

    printf("\nYou habe written %6d blanks, %6d tabs and %6d newlines.\n", blanks, tabs, newlines);

    return 0;
}
