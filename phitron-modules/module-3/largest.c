#include <stdio.h>
int main()
{
    // int 2, 4, 3;
    // if (2 < 4 && 3 < 4)
    // {
    //     printf("b is largest\n");
    // }
    // int 4, 2, 3;

    // if (4>2 && 4 > 3)
    // {
    //     printf("a is largest\n");

    // }
    // int 3, 2, 4;
    // if (4 > 2 && 4 > 3)
    // {
    //     printf("c is largest\n");

    // }
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a is largest\n");
    }
    // int 4, 2, 3;

    if (b > a && b > c)
    {
        printf("b is largest\n");
    }
    // int 3, 2, 4;
    if (c > a && c > b)
    {
        printf("c is largest\n");
    }

    return 0;
}
