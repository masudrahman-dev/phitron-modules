#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int new_arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {

        if (arr[j] < 0)
        {
            new_arr[j] = 2;
        }
        else if (arr[j] == 0)
        {
            new_arr[j] = 0;
        }
        else
        {
            new_arr[j] = 1;
        }
        printf("%d ", new_arr[j]);
    }
    return 0;
}