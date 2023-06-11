// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> data;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             data.push_back(n);
//         }
//         vector<int> sort_data = data;
//         sort(sort_data.begin(), sort_data.end());
//         for (auto &v : sort_data)
//         {
//             cout << v << " ";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin >> r;

    while (r--)
    {
        int n;
        cin >> n;

        vector<int> data(n);
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }

        vector<int> sorted_data = data;              
        sort(sorted_data.begin(), sorted_data.end()); 
        if (data == sorted_data)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
