#include <stdio.h>
#define MAXLINE 1000        /* maximum input line size */
#define LENGTH_REQ 80       /* the required length for a printed line */

int getline(char s[], int lim);

/* print all input lines longer than 80 characters */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while (len = getline(line, MAXLINE))
        if (len >= LENGTH_REQ)
            printf("Line Contents (%d chars): %s", len, line);

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
