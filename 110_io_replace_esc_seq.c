#include <stdio.h>

/* A program which copies its input to its input, replacing each tab by \t,
    each backspace by \b, and each backslash by \\. */
int main()
{
    int c, skip_char;

    while ((c = getchar()) != EOF) {
        skip_char = 0;
        
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            skip_char = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            skip_char = 1;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            skip_char = 1;
        }

        if (skip_char == 0) {
            putchar(c);
        }
    }

    return 0;
}