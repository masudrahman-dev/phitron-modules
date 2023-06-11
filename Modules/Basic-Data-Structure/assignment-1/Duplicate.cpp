// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<long long int> data;
//     for (int i = 0; i < n; i++)
//     {
//         int v;
//         cin >> v;
//         data.push_back(v);
//     }

//     int target = data[0];

//     cout << target;
//     int left = 1;
//     int right = data.size() - 1;
//     bool flag = false;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (data[mid] == target)
//         {
//             flag = true;
//             break;
//         }

//         if (data[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {

//             right = mid - 1;
//         }
//     }

//     if (flag == true)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    sort(data.begin(), data.end()); 

    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (data[i] == data[i - 1])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
