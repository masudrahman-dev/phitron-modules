#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {

                // int temp = arr[j];
                // arr[j] = arr[i];
                // arr[i] = temp;
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// #include <iostream>
// using namespace std;

// // user defined ftn to print array
// void printArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     // declare array
//     const int size = 5;
//     int arr[size] = {5, 2, 3, 4, 1};

//     // temp variable to aid in swapping
//     int temp;

//     cout << "Original array: ";
//     printArr(arr, size);

//     // swapping first and last element
//     swap(arr[0], arr[size - 1]);

//     cout << "Array with first and last element swapped: ";
//     printArr(arr, size);

//     return 0;
// }
