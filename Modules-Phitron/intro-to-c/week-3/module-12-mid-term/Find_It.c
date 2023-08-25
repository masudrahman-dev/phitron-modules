#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x, counter = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
