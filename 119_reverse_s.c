#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[], int end);


int main()
{
    int len;
    char line[MAXLINE];

    while (len = getline(line, MAXLINE)) {
        reverse(line, len);

        printf("%s", line);
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

/* reverse: reverse a string s */
void reverse(char s[], int end)
{
    int start;
    char temp;

    start = 0;
    --end;
    if (s[end] == '\n')
        --end;
    while (start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        --end;
        ++start;
    }
}