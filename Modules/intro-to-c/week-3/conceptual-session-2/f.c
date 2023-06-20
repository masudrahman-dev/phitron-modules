#include <stdio.h>
#include <string.h>

int main()
{
    int n, p, total = 0;
    scanf("%d %d", &n, &p);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == p)
        {
            total++;
        }
    }
    printf("%d\n", total);
    return 0;
}
