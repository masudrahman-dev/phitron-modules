// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int fac(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//         return (n * fac(n - 1));
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int result = fac(n);
//     printf("%d\n", result);
//     return 0;
// }
#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}
