#include <stdio.h>

void printPattern(int n)
{
    int i, j;
    int middle = (n + 1) / 2; 

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == middle || j == middle)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        return 0;
    }

    printPattern(n);

    return 0;
}
