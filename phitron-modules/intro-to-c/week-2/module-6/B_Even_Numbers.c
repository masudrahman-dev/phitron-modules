#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1");
    }
    else
    {
        int i = 1;
        while (i <= n)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }

            i++;
        }
    }

    return 0;
}