#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrToCelcius(float fahr);

/* print Fahrenheit-Celcius table for fahr = 0, 20, ... , 300 */
int main()
{
    float fahr, celcius;
    
    printf("%3c %6c\n----------\n", 'F', 'C');
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celcius = fahrToCelcius(fahr);
        printf("%3.0f %6.1f\n", fahr, celcius);
    }

    return 0;
}

/* convert fahrenheit value to celcius */
float fahrToCelcius(float fahr)
{
    return (5.0/9.0) * (fahr - 32);
}