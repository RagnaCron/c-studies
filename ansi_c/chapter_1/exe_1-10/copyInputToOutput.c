/* Copy the input to the output, replacing each
 * tab by \t, each backspace by \b, and each
 * backslash by \\.
 *
 * User CTRL + H to make a backspace
 *
 * This makes tabs and backspaces visable in unambiguous way.
 */

#include <stdio.h>

int main(void) {

    int c, d;

    while ((c = getchar()) != EOF) {

        d = 0;

        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            d = 1;
        }

        if (c == '\t') {
            putchar('\\');
            putchar('t');
            d = 1;
        }

        if (c == '\b') {
            putchar('\\');
            putchar('b');
            d = 1;
        }

        if (d == 0)
            putchar(c);

    }

    return 0;
}
