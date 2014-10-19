#include <stdio.h>
#define MAXLINE 1000        /* maximum input line size */

int getline(char s[], int lim);
void removetrailingblanks(char s[], int end);

int main()
{
    int len;
    char line[MAXLINE];

    while (len = getline(line, MAXLINE)) {
        if (len != 0 && !(len == 1 && line[0] == '\n')) {
            printf("Original line: %s", line);
            removetrailingblanks(line, len);
            printf("Modified line: %s", line);
        }
    }
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

/* removetrailingblanks: remove whitespace or blank lines */
void removetrailingblanks(char s[], int end)
{
    if (s[end - 1] == '\n')
        --end;
    while (--end >= 0 && (s[end] == ' ' || s[end] == '\t'))
        continue;
    s[++end] = '\0';
}