#include <stdio.h>

#define YES 1
#define NO 0

/* A program that prints its input one word per line. */
int main()
{
    int c, prev_space;

    prev_space = NO;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (prev_space == NO) {
                prev_space = YES;
                putchar('\n');
            }
        } else {
            prev_space = NO;
            putchar(c);
        }
    }

    return 0;
}