/* print Fahrenheit to Celsius table */

#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;    // lower limit of temperature table
    upper = 300;    // upper limit ot temperature table
    step = 20;      // step size temperature

    printf("Shows a Fahrenheit to Celsius table.\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%7.1f\t%3.0f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}


