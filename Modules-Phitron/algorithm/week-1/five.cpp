#include <iostream>
using namespace std;

void merge(int arr1[], int arr1_len, int arr2[], int arr2_len, int mergeArr[])
{
    int i = 0, j = 0, k = 0;

    while (i < arr1_len && j < arr2_len)
    {
        if (arr1[i] >= arr2[j])
        {
            mergeArr[k++] = arr1[i++];
        }
        else
        {
            mergeArr[k++] = arr2[j++];
        }
    }

    while (i < arr1_len)
    {
        mergeArr[k++] = arr1[i++];
    }

    while (j < arr2_len)
    {
        mergeArr[k++] = arr2[j++];
    }
}

int main()
{
    int n, m;
    cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cin >> m;

    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int mergeArr[n + m];

    merge(arr1, n, arr2, m, mergeArr);

    for (int i = 0; i < n + m; i++)
    {
        cout << mergeArr[i] << " ";
    }

    cout << endl;

    return 0;
}
