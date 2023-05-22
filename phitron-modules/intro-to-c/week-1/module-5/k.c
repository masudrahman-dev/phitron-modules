// #include <stdio.h>
// int main()
// {
//     double a, b, c, max, min;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         max = a;
//     }
//     else if (b > a && b > c)
//     {
//         max = b;
//     }
//     else
//     {
//         max = c;
//     }
//     if (a < b && a < c)
//     {
//         min = a;
//     }
//     else if (b < a && b < c)
//     {
//         min = b;
//     }
//     else
//     {
//         min = c;
//     }
//     printf("%d %d", min, max);
//     // printf("%d\n",min);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c, max, min;

    scanf("%d %d %d", &a, &b, &c);

    // Find maximum number
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    // Find minimum number
    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    printf("%d %d", min, max);

    return 0;
}
