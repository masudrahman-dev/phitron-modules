// #include <stdio.h>
// int main()
// {
//     int n, i;
//     unsigned long long fact = 1;
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // shows error if the user enters a negative integer
//     if (n < 0)
//         printf("Error! Factorial of a negative number doesn't exist.");
//     else
//     {

//         for (i = 1; i <= n; ++i)
//         {

//             fact *= i;
//         }
//         printf("Factorial of %d = %llu", n, fact);
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int A;
    long long int B;
    float C;
    char D;
    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf(" %c", &D);

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%f\n", C);
    printf("%c\n", D);
    return 0;
}
// 100
// 1234567891234567
// 23.5675
// A