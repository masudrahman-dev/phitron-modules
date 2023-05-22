#include <stdio.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);
    // printf("%s\n", a);

    for (int i = 0; i < n; i++)
    {
        sum += a[i] - 48;
        // printf("%d\n", a[i] - 48);
    }
    printf("%d\n", sum);
    return 0;
}
