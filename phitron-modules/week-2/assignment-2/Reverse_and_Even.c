// #include <stdio.h>
// int main()
// {

//     int n;

//     scanf("%d", &n);
//     int arr[n], rev_arr[n], new_arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (j % 2 == 0)
//         {

//             new_arr[j] = arr[j];
//             printf("%d ", new_arr[j]);
//             // rev_arr[j] = new_arr[n - j - 1];
//             // printf("%d ", rev_arr[j]);
//         }
//     }
//     printf("\n\n");

//     for (int k = n; k > 0; k--)
//     {
//         printf("%d  ", new_arr[k]);
//     }

// printf("\n\n");
// for (int k = 0; k < n; k++)
// {
//     rev_arr[k] = new_arr[n - k - 1];
//     if (rev_arr[k] >= new_arr[k])
//     {
//         printf("%d ", rev_arr[k]);
//     }
// }

// for (int m = 0; m < n; m++)
// {
//     arr[m] = rev_arr[m];
//     // printf("%d ", arr[m]);
//     if (m % 2 == 0)
//     {
//         printf("%d\n", arr[m]);
//     }
// }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     // printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     // printf("Enter the array elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     // printf("Values at even indexes in reverse order:\n");
//     for (int i = n ; i > 0; i --)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// C Program to Reverse an Array using a recursive function

// #include <stdio.h>
// #define N 1000

// void reverse(int *arr, int l, int r)
// {
//     if (l < r)
//     {
//         int temp;
//         temp = arr[l];
//         arr[l] = arr[r];
//         arr[r] = temp;
//         reverse(arr, l + 1, r - 1);
//     }
// }

// int main()
// {
//     int arr[N];

//     int n;
//     // Inputting the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     // Inputting the array
//     printf("Enter an array: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // Reversing the array by swapping using a recursive function
//     reverse(arr, 0, n - 1);

//     // Printing the reversed array
//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// reverse array in c
// reverse an array in c

// C Program to Reverse an Array by swapping

#include <stdio.h>
// #define N 1000

int main()
{
    // int arr[N];

    int n;
    // Inputting the size of the array
    // printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int new_arr[n];
    // Inputting the array
    // printf("Enter an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // access a array

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // copying array
            new_arr[i] = arr[i];

            // printf("%d ", new_arr[i]);
        }
        else
        {
            new_arr[i] = 0;
        }
    }

    // Reversing the array by swapping
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int temp;
        temp = new_arr[l];
        new_arr[l] = new_arr[r];
        new_arr[r] = temp;
        l++;
        r--;
    }
    // printf("\n\n");
    // Printing the reversed array
    // printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        if (new_arr[i] > 0)
        {

            printf("%d ", new_arr[i]);
        }
        // printf("%d ", new_arr[i]);
    }

    return 0;
}

