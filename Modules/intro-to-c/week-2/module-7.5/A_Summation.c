
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum = sum * (-1);
   
    }
    printf("%lld\n", sum);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     long long n;
//     scanf("%lld", &n); // read number of elements
//     long long a[n];
//     long long n_sum = 0;
//     long long p_sum = 0;
//     long long result = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]); // read the element
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < 0)
//         {
//             n_sum += a[i];
//         }
//         else
//         {
//             p_sum += a[i];
//         }
//     }

//     result = n_sum + p_sum;
//     printf("%lld\n", labs(result)); // print the absolute summation

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n); // read number of elements
//     long long a[n];
//     long long n_sum = 0;
//     long long p_sum = 0;
//     long long result = 0;

//     for (int i = 0; i < n; i++)
//     {

//         scanf("%d", &a[i]); // read the element
//     }
//     for (int i = 0; i < n; i++)
//     {

//         // take the absolute value and add it to the sum
//         if (a[i] < 0)
//         {

//             n_sum += a[i];
//         }
//         else
//         {
//             p_sum += a[i];
//         }
//     }
//     result = p_sum - n_sum;
//     printf("%d\n", labs(result)); // print the absolute summation

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     int abs_num = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     if (sum < 0)
//     {
//         abs_num = abs(sum);
//         printf("%d\n", abs_num);
//     }
//     else
//     {
//         printf("%d\n", sum);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     long long int abs_num = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     long long int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     if (sum < 0)
//     {
//         abs_num = labs(sum);
//         printf("%d", abs_num);
//     }
//     else
//     {
//         printf("%d", sum);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, arr[n], sum = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     printf("%d\n", sum < 0 ? abs(sum) : sum);
//     return 0;
// }

// C program for Method 3

// #include <stdio.h>
// #include <stdlib.h>

// // Function to find the absolute
// // value
// void findAbsolute(int N)
// {

//     // Find absolute
//     int X = abs(N);

//     // Print the absolute value
//     printf("%d", X);
// }

// // Driver Code
// int main()
// {

//     // Given integer
//     int N = -12;

//     // Function call
//     findAbsolute(N);
//     return 0;
// }
// C program for Method 2
// #include <stdio.h>
// #define CHAR_BIT 8

// // Function to find the absolute
// // value
// void findAbsolute(int N)
// {

//     // Find mask
//     int mask = N >> (sizeof(int) * CHAR_BIT - 1);

//     // Print the absolute value
//     // by (mask + N)^mask
//     printf("%d ", (mask + N) ^ mask);
// }

// // Driver Code
// int main()
// {

//     // Given integer
//     int N = -12;

//     // Function call
//     findAbsolute(N);
//     return 0;
// }

// C program for Method 1
// #include <stdio.h>

// // Function to find the absolute value
// void findAbsolute(int N)
// {

//     // If the number is less than
//     // zero, then multiply by (-1)
//     if (N < 0)
//     {
//         N = (-1) * N;
//     }

//     // Print the absolute value
//     printf("%d ", N);
// }

// // Driver Code
// int main()
// {

//     // Given integer
//     int N = -12;

//     // Function call
//     findAbsolute(N);
//     return 0;
// }
