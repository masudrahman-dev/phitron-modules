#include <stdio.h>
int main()
{
    int a, b, r;

    scanf("%d %d", &a, &b);
    r = a - b;

    if (r <= 0)
    {
        printf("0");
        /* code */
    }
    else
    {
        printf("%d\n", r);
    }

    return 0;
}