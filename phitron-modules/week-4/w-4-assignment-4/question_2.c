#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    if (n < 1)
    {
        printf("Enter a positive integer.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
