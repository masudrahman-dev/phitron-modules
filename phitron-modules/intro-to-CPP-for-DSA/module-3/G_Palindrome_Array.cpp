#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 1;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    delete[] arr;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(const vector<int> &arr)
// {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left < right)
//     {
//         if (arr[left] != arr[right])
//             return false;
//         left++;
//         right--;
//     }

//     return true;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     vector<int> arr(N);
//     for (int i = 0; i < N; i++)
//         cin >> arr[i];

//     if (isPalindrome(arr))
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }
