#include <bits/stdc++.h>
using namespace std;

int biSearch(vector<int> &arr, int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int k;
    cin >> k;
    int result = biSearch(numbers, 0, n - 1, k);

    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
