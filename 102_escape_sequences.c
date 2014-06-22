#include <stdio.h>

int main(int argc, char** argv)
{
    /* Gives the following warning: "unknown escape sequence"
        prints  "unknown character c" */
    printf("unknown character \c   \n");

    printf("tab\tcharacter \n");
    printf("backspace\b  \n");
    printf("double quote \"  \n");
    printf("backslash  \\ \n");

    return 0;
}