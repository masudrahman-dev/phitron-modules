#include <bits/stdc++.h>
using namespace std;

int *create_arr(int size)
{
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    return arr;
}

int main()
{
    int size;

    cin >> size;

    int *arr = create_arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}