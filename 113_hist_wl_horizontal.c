#include <stdio.h>

#define HISTSIZE 11

/* A program which prints a histogram of the lengths of words in its input. The
    histogram is printed with horizontal bars */
int main()
{
    int i, j;
    int c;
    int word_length, current_count, max_count;
    int prev_space;
    int wl_count[HISTSIZE];

    for (i = 0; i < HISTSIZE; i++)
        wl_count[i] = 0;

    word_length = 0;
    prev_space = 1;
    max_count = 0;


    while ((c = getchar()) != EOF) {

        if ((c == ' ' || c == '\n' || c == '\t')  
            && prev_space == 0 && word_length > 0) {
            if (word_length <= 10) {
                current_count = ++wl_count[word_length -1];
            } else {
                current_count = ++wl_count[HISTSIZE - 1];
            }

            if (current_count > max_count) {
                max_count = current_count;
            }

            word_length = 0;
            prev_space = 1;
        } else if (c != ' ') {
            prev_space = 0;
            word_length++;
        }
    }


    for (i = 0; i < HISTSIZE - 1; i++) {
        printf("%-4d |", i + 1);
        for (j = 0; j < wl_count[i]; j++) {
            printf("%3c", '*');
        }
        printf("\n");
    }

    printf("%-4s |", "10+");
    for (j = 0; j < wl_count[HISTSIZE - 1]; j++) {
        printf("%3c", '*');
    }
    printf("\n");

    printf("%4s +", "");
    for (j = 0; j < max_count; j++) {
        printf("---");
    }
    printf("\n%4s  ", "");
    for (j = 0; j < max_count; j++) {
        printf("%3d",j + 1);
    }
    printf("\n");

    return 0;
}