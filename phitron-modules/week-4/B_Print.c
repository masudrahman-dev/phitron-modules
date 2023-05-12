#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
void num(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i != 5)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d", i);
        }
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}
// #include <stdio.h>

// void print_numbers(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", i);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     print_numbers(n);
//     return 0;
// }
