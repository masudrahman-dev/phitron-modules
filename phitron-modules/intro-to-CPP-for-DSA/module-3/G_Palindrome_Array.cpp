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
    int flag = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {

            // cout << arr[i] << " ";
            flag = 1;
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
// #include <iostream>
// #include <vector>

// bool isPalindrome(const std::vector<int> &arr)
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
//     std::cin >> N;

//     std::vector<int> arr(N);
//     for (int i = 0; i < N; i++)
//         std::cin >> arr[i];

//     if (isPalindrome(arr))
//         std::cout << "YES" << std::endl;
//     else
//         std::cout << "NO" << std::endl;

//     return 0;
// }
