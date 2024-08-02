#include <stdio.h>

int main() 
{
    int table[2][10],i;

    // Calculate and store the table of 2
    for (i = 1; i <= 10; i++) {
        table[0][i - 1] = 2 * i;
    }

    // Calculate and store the table of 3
    for (i = 1; i <= 10; i++) {
        table[1][i - 1] = 3 * i;
    }

    // Table for 2 printing
    printf("Table for 2 is\n");
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", 2, i, table[0][i - 1]);
    }
    printf("\n");

    // Table for 2 printing
    printf("Table for 3 is\n");
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", 3, i, table[1][i - 1]);
    }
    printf("\n");

    return 0;
}