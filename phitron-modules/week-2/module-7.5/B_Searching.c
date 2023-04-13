#include <stdio.h>
int main()
{

    int n, target, index = -1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
    if (index > -1)
    {
        printf("%d\n", index);
    }
    else
    {
       printf("%d\n",index);
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]); // calculate the length of the array
//     int target = 30;                      // the value we want to find
//     int indetarget = -1;                       // initialize the indetarget to -1

//     // iterate through the array and find the indetarget of the target value
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             indetarget = i;
//             break; // etargetit the loop if the target value is found
//         }
//     }

//     if (indetarget == -1)
//     {
//         printf("Target value not found in the array.");
//     }
//     else
//     {
//         printf("The indetarget of the target value %d is %d.\n", target, indetarget);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int arr[] = {2, 3, 4, 5, 7, 8, 9};
//     int target = 4;
//     int arr_len = sizeof(arr) / sizeof(arr[0]);
//     int indetarget = -1;
//     printf("%d arr_len\n", arr_len);

//     for (int i = 0; i < arr_len; i++)
//     {
//         if (arr[i] == target)
//         {
//             indetarget = i;
//         }
//     }
//     printf("%d indetarget\n", indetarget);

//     return 0;
// }