#include <stdio.h>

/* print Celcius-Fahrenheit table
    for celcius = 0, 20, ..., 280, 300 */
int main()
{
    float celcius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    
    celcius = lower;
    step = 20;

    printf("%3c %6c\n----------\n", 'C', 'F');
    while (celcius <= upper) {
        fahr = 32.0 + (celcius * 1.8);
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
    
    return 0;
}