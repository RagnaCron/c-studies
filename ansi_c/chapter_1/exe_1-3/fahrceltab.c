#include <stdio.h>

/* print Fahrenheit to Celsius table */
int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;      // lower limit of temperature table
    upper = 300;    // upper limit ot temperature table
    step = 20;      // step size temperature

    printf("Shows a Fahrenheit to Celsius table.\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %7.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
