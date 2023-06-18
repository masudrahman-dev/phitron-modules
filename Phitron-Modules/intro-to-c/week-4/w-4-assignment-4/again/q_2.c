#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int rows = 8;
    for (int i = 1; i <= rows; i++)
    {
        for (int s = i; s <= rows; s++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
