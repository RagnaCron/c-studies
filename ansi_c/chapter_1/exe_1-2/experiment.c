/* Experiment to find out what happens when printf
 * gets some different stuff */
#include <stdio.h>

int main(void) {
    printf("What happens when I use \\a:\t\"\a\"\n");
//    printf("What happens when I use \\c:\t\"\c\"\n"); //  warning: unknown escape sequence: '\c'
//    printf("What happens when I use \\y:\t\"\y\"\n"); //  warning: unknown escape sequence: '\y'
    return 0;
}
