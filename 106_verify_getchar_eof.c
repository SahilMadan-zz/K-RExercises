#include <stdio.h>

/* This program will verify that the expression getchar() != EOF is equal to 
    0 or 1 */
int main()
{
    int value;

    while (value = (getchar() != EOF)) {
        printf("The value of getchar() != EOF when NOT EOF: %d\n", value);
        printf("(Press CTRL+D to end input)\n");
    }
    printf("The value of getchar() != EOF when EQUAL to EOF: %d\n", value);

    return 0;
}