// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int solve(int t)
// {
//     if (t == 0)
//     {
//         return 0;
//     }
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     printf("\n");
//     int last_digit = n % 10;
//     int first_digit = n / 10;
//     int len = 0;
//     int i = 1;
//     while (first_digit != 0)
//     {
//         ++i;
//         arr[len] = last_digit;
//         ++len;
//         last_digit = first_digit % 10;
//         arr[len] = last_digit;
//         first_digit /= 10;
//     }

//     while (i--)
//     {
//         if (i != 1)
//         {
//             printf("%d ", arr[i]);
//         }
//         else
//         {
//             printf("%d", arr[i]);
//             printf(" ");
//         }
//     }

//     solve(t - 1);
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     solve(t);

//     return 0;
// }

// #include <stdio.h>

// void solve(int t)
// {
//     if (t == 0)
//     {
//         return;
//     }

//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     int len = 0;

//     // get the digits of n in reverse order
//     while (n > 0)
//     {
//         int digit = n % 10;
//         arr[len++] = digit;
//         n /= 10;
//     }

//     // print the digits in the original order
//     for (int i = len - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     solve(t - 1);
// }

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     solve(t);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_digits(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    printf("%d\n", n);
    print_digits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        print_digits(n);
        printf("\n");
    }
    return 0;
}
