#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // access
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {

            even = even + arr[j];
        }
        else
        {
            odd = odd + arr[j];
        }
    }
    printf("%d %d", even, odd);
    return 0;
}