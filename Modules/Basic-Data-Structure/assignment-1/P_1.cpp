

#include <iostream>
using namespace std;

int main()
{

    // cin >> n;

    // int mid = n / 2; // Middle row index

    // Print upper half of the pattern
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n - 1; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // for (int j = i; j <= n; j++)
    //     {
    //         cout << "&";
    //     }
    // }
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "#";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "$";
        }
        for (int m = 2; m <= i; m++)
        {
            cout << "&";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "#";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "$";
        }
        for (int m = 2; m <= i; m++)
        {
            cout << "&";
        }
        cout << endl;
    }

    return 0;
}
