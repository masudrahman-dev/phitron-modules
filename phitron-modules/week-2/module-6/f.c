#include <stdio.h>
int main()
{
    int n, i = 1, result;
    scanf("%d", &n);
    while (i <= 12)
    {
        result = n * i;
        printf("%d * %d = %d\n", n, i, result);
        i++;
    }
    // for (int j = 1; j <= 12; j++)
    // {
    //     result = n * i;
    // }

    return 0;
}