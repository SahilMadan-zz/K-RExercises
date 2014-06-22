#include <stdio.h>

/* print Fahrenheit-Celcius table for fahr = 300, 280, ... , 20, 0 */
int main()
{
    float celcius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3c %6c\n----------\n", 'F', 'C');
    for (fahr = upper; fahr >= lower; fahr -= step) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
    }

    return 0;
}