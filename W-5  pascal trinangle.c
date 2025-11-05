#include <stdio.h>

int main()
{
    int no_row, c, blk, i, j;

    printf("Input number of rows: ");
    scanf("%d", &no_row);

    // Outer loop for iterating over rows
    for (i = 0; i < no_row; i++)
    {
        // Inner loop for printing spaces
        for (blk = 1; blk <= no_row - i; blk++)
            printf("  ");

        // Inner loop for generating & printing pattern
        c = 1;
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j; // calculate next pattern value

            printf("%4d", c); // print the pattern value
        }

        printf("\n"); // move to the next row
    }

    return 0;
}
