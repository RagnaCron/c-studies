/* print Celsius to Fahrenheit table */

#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;    // lower limit of temperature table
    upper = 300;    // upper limit ot temperature table
    step = 20;      // step size temperature

    printf("Shows a Celsius to Fahrenheit table.\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%7.0f\t%3.0f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}


