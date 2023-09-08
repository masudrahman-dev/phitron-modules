#include <iostream>
using namespace std;

void merge(int arr[], int left[], int right[], int leftLength, int rightLength)
{
    int i = 0, j = 0, k = 0;

    while (i < leftLength && j < rightLength)
    {
        if (left[i] >= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    while (i < leftLength)
    {
        arr[k++] = left[i++];
    }

    while (j < rightLength)
    {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int length)
{
    if (length <= 1)
    {
        return;
    }

    int mid = length / 2;
    int left[mid];
    int right[length - mid];

    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < length; i++)
    {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, length - mid);
    merge(arr, left, right, mid, length - mid);
}

int main()
{
    int n;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    mergeSort(numbers, n);

    for (auto &&number : numbers)
    {
        cout << number << " ";
    }

    cout << endl;

    return 0;
}
