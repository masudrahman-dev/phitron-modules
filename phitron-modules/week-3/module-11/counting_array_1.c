#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // int zero = 0;
    int count[7] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        count[val]++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d - %d \n", i, count[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == 0)
    //     {
    //         count[0]++;
    //     }
    //     if (a[i] == 2)
    //     {
    //         count[2]++;
    //     }
    //     if (a[i] == 3)
    //     {
    //         count[3]++;
    //     }
    //     if (a[i] == 5)
    //     {
    //         count[5]++;
    //     }
    // }

    return 0;
}
