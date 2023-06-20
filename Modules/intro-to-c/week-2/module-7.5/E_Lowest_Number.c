#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    ;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int s_value = INT_MAX, idx;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < s_value)
        {
            s_value = arr[j];
            idx = j;
        }
    }
    printf("%d %d", s_value, idx + 1);

    return 0;
}