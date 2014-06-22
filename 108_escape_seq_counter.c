#include <stdio.h>

/* A program to count the number of blanks, tabs, and newlines */
int main() 
{
    int c, nl, blanks, tabs;
    nl = 0;
    blanks = 0;
    tabs = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
    }
    printf("Blanks: %-6d Tabs: %-6d Newlines: %-6d\n", blanks, tabs, nl);

    return 0;
}