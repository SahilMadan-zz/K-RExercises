#include <stdio.h>

/* A program to copy its input to its output, replacing each string of one or
    more blanks by a single blank */
int main()
{
    int c; 
    int prev_blank;

    prev_blank = 0;
    while ((c = getchar()) != EOF) {
        
        if (c == ' ') {
            if (prev_blank == 0) {
                prev_blank = 1;
                putchar(c);
            }
        }
        if (c != ' ') {
            putchar(c);
            prev_blank = 0;
        }
    }

    return 0;
}