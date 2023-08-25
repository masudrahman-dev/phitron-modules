// #include <stdio.h>
// int main()
// {
//     int n, m, max = 0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &m);
//         if (max > m)
//         {

//         }
//         else
//         {
//             max = m;
//         }
//     }
//     printf("%d\n", max);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, m, max = 0;
    // printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("Enter integer %d: ", i);
        scanf("%d", &m);

        if (max < m)
        {
            max = m;
        }
    }
    printf("%d\n", max);
    return 0;
}
