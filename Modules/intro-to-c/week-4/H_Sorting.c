#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true; // Elements swapped in this pass
            }
        }
        // if flag == false, no swapping is done in this pass
        if (flag == false)
            break; // Array is already sorted, hence break the loop
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     int arr[5] = {20, 40, 10, 25, 44};
//     int i = 0;
//     while (i < n - 1)
//     { // Implementing Bubble Sort using while-loop
//         int j = 0;
//         while (j < n - i - 1)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//             j++;
//         }
//         i++;
//     }
//     printf("Array after implementing Bubble sort: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// int main()
// {
//     int n = 5;
//     int arr[5] = {44, 33, 11, 22, 55};
//     int i_len = n - 1;
//     for (int i = 0; i < i_len; i++)
//     {
//         int j_len = n - i - 1;
//         printf("%d j_len\n", j_len);
//         for (int j = 0; j < j_len; j++)
//         {
//             // checking and swapping adjacent left_ele > right_ele
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int min = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             printf("%d ", arr[i]);
//         }
//         else
//         {
//             arr[i] = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
// Bubble sort in C

// #include <stdio.h>

// // perform the bubble sort
// void bubbleSort(int array[], int size)
// {

//     // loop to access each array element
//     for (int step = 0; step < size - 1; ++step)
//     {

//         // loop to compare array elements
//         for (int i = 0; i < size - step - 1; ++i)
//         {

//             // compare two adjacent elements
//             // change > to < to sort in descending order
//             if (array[i] > array[i + 1])
//             {

//                 // swapping occurs if elements
//                 // are not in the intended order
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//             }
//         }
//     }
// }

// // print array
// void printArray(int array[], int size)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         printf("%d  ", array[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int data[] = {-2, 45, 0, 11, -9};

//     // find the array's length
//     int size = sizeof(data) / sizeof(data[0]);

//     bubbleSort(data, size);

//     printf("Sorted Array in Ascending Order:\n");
//     printArray(data, size);
// }

// Optimized Bubble sort in C

//  #include <stdio.h>
// // perform the bubble sort
// void bubbleSort(int array[], int size)
// {

//     // loop to access each array element
//     for (int step = 0; step < size - 1; ++step)
//     {

//         // check if swapping occurs
//         int swapped = 0;

//         // loop to compare array elements
//         for (int i = 0; i < size - step - 1; ++i)
//         {

//             // compare two array elements
//             // change > to < to sort in descending order
//             if (array[i] > array[i + 1])
//             {

//                 // swapping occurs if elements
//                 // are not in the intended order
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;

//                 swapped = 1;
//             }
//         }

//         // no swapping means the array is already sorted
//         // so no need for further comparison
//         if (swapped == 0)
//         {
//             break;
//         }
//     }
// }

// // print array
// void printArray(int array[], int size)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         printf("%d  ", array[i]);
//     }
//     printf("\n");
// }

// // main method
// int main()
// {
//     int data[] = {-2, 45, 0, 11, -9};

//     // find the array's length
//     int size = sizeof(data) / sizeof(data[0]);

//     bubbleSort(data, size);

//     printf("Sorted Array in Ascending Order:\n");
//     printArray(data, size);
// }