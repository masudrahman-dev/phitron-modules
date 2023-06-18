#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    if (n > 0)
    {
        while (i <= n)
        {
            printf("%d ", i++);
        }
    }
    else
    {

        while (n != i)
        {
            printf("%d ", n++);
        }
        printf("%d ", i);
    }

    return 0;
}