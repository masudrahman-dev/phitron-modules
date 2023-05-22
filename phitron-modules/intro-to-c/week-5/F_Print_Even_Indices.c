// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void rec(int arr[], int n)
// {

//     if (n == 0)
//     {
//         return 0;
//     }
//     printf("%d\n", arr[n]);
//     rec(arr[n - 1], n - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     rec(arr, n);
//     return 0;
// }
#include <stdio.h>

void print_even_reverse(int A[], int N, int i)
{
    if (i < N)
    {
        print_even_reverse(A, N, i + 2); // recursive call with next even index
        if (i % 2 == 0)
        {                        // check if index is even
            printf("%d ", A[i]); // print the element at even index
        }
    }
}

int main()
{
    int N, A[1000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    print_even_reverse(A, N, 0); // start recursive function with initial index 0
    return 0;
}
