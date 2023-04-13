#include <stdio.h>
int main()
{
    int n, idx, s_value;
    ;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    s_value = arr[0];
    idx = 0;
    for (int j = 0; j < n; j++)
    {
        if (s_value > arr[j])
        {

            s_value = arr[j];
            idx = j;

            printf("%d %d", s_value, idx + 1);
        }
    }

    return 0;
}