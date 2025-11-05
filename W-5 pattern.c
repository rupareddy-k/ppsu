#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            int m = abs(i) > abs(j) ? abs(i) : abs(j);
            printf("%2d", m + 1);
        }
        printf("\n");
    }

    return 0;
}
