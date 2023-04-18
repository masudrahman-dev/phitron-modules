#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // min and max
    int min = arr[0];
    int max = arr[0];
    int min_pos = 0;
    int max_pos = 0;
    for (int j = 0; j < n; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            min_pos = j;
        }
        if (max < arr[j])
        {
            max = arr[j];
            max_pos = j;
        }
    }
    // swap minimum and maximum elements

    int temp = arr[min_pos];
    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;

    // printf("%d\n", min);
    // printf("%d\n", max);
    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr[l]);
    }

    return 0;
}
