#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr_1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }
    int m;
    cin >> m;
    int *arr_2 = new int[m];
    int i;
    for (i = 0; i < m; i++)
    {
        // cin >> arr_2[i];
        arr_2[i] = arr_1[i];
        if (i == n)
        {
            break;
        }
    }
    for (int j = i; j < m; j++)
    {
        cin >> arr_2[j];
    }

    delete[] arr_1;
    for (int i = 0; i < m; i++)
    {
        cout << arr_2[i] << " ";
    }

    return 0;
}
