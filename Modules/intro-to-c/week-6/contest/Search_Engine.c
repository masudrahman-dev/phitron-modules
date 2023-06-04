#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);
    int counter = 0;

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int s;
        scanf("%d", &s);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == s)
            {
                counter++;
                flag = 1;
                printf("Case %d: %d\n", counter, i + 1);
                break;
            }
        }
        if (flag == 0)
        {
            counter++;
            printf("Case %d: Not Found\n", counter);
        }
    }

    return 0;
}
