#include <stdio.h>

#define NUMCHARS 128

/* Program prints a histogram of the characters pressed.
    Note: Because tabs and newlines break the format, the characters are 
    printed as their ASCII int value */
int main()
{
    int char_count[NUMCHARS];
    int i, j;
    int start, end;
    int c;
    int max_count;
    int input_given;

    for (i = 0; i < NUMCHARS; i++) {
        char_count[i] = 0;
    }
    start = NUMCHARS;
    max_count = end = input_given = 0;


    while ((c = getchar()) != EOF) {
        input_given = 1;
        char_count[c]++;

        if (char_count[c] > max_count) {
            max_count = char_count[c];
        }
        if (c > end) {
            end = c;
        }
        if (c < start) {
            start = c;
        }
    }


    if (input_given == 1) {
        printf("\n");
        for (i = max_count; i > 0; i--) {
            printf("%4d |", i);
            for (j = start; j <= end; j++) {
                if (char_count[j] >= i) {
                    printf("%1c", '*');
                } else {
                    printf("%1c", ' ');
                }
            }
            printf("\n");
        }

        printf("%4s +", "");
        for (i = start; i <= end; i++) {
            printf("-");
        }
        printf("\n%4s  ", "");
        for (i = start; i <= end; i++) {
            printf("%1d", i / 100);
        }
        printf("\n%4s  ", "");
        for (i = start; i <= end; i++) {
            printf("%1d", i / 10 % 10);
        }
        printf("\n%4s  ", "");
        for (i = start; i <= end; i++) {
            printf("%1d", i % 10);
        }
        printf("\n");
    }

    return 0;
}