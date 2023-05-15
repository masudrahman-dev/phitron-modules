// #include <stdio.h>

// int main()
// {
//    long long int t;
//     scanf("%lld", &t);
//     while (t--)
//     {
//        long long int L, R, sum = 0;
//         scanf("%lld %lld", &L, &R);
//         for (long long int i = L; i <= R; i++)
//         {
//             sum += i;
//         }

//         printf("%lld\n", sum);
//     }

//     return 0;
// }

// #include <stdio.h>

// long long int rangeSum(long long int L, long long int R)
// {
//     long long int sum = 0;

//     // Calculate the sum of numbers from L to R
//     for (long long int i = L; i <= R; i++)
//     {
//         sum += i;
//     }

//     return sum;
// }

// int main()
// {
//     int T;
//     scanf("%d", &T);

//     while (T--)
//     {
//         long long int L, R;
//         scanf("%lld %lld", &L, &R);

//         long long int sum = rangeSum(L, R);
//         printf("%lld\n", sum);
//     }

//     return 0;
// }
// #include <stdio.h>

// int rangeSum(int L, int R)
// {
//     // Calculate the sum using the formula: n * (n + 1) / 2
//     int n = R - L + 1;
//     int sum = (n * (L + R)) / 2;

//     return sum;
// }

// int main()
// {
//     int T;
//     scanf("%d", &T);

//     while (T--)
//     {
//         int L, R;
//         scanf("%d %d", &L, &R);

//         int sum = rangeSum(L, R);
//         printf("%d\n", sum);
//     }

//     return 0;
// }

#include <stdio.h>

long long int rangeSum(long long int L, long long int R)
{
    // Calculate the sum using the formula: n * (n + 1) / 2
    long long int n = R - L + 1;
    long long int sum = (n * (L + R)) / 2;

    return sum;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int L, R;
        scanf("%lld %lld", &L, &R);

        long long int sum = rangeSum(L, R);
        printf("%lld\n", sum);
    }

    return 0;
}
