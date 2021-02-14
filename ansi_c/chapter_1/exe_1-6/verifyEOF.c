#include <stdio.h>

// Verify that the expression "getcahr() != EOF" is 0 or 1.
int main(void) {
    printf("Lets look what EOF is.\n");
    printf("EOF 0 or 1: %d\n", getchar() != EOF);
    return 0;
}
