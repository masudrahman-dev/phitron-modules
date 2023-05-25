#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;

    cin >> size;

    int *dynamicArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = i + 2;
    }

    for (int i = 0; i < size; i++)
    {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;

    return 0;
}
