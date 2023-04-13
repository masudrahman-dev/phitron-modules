#include <stdio.h>
int main()
{
    int even = 0, odd = 0, positive = 0, negative = 0, n, m;
    // scanf("%d %d %d %d", &a, &b, &c, &d);

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &m);
        if (m % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (m >= 0)
        {
            positive++;
        }
        else
        {
            negative--;
        }
    }

    printf(" Even: %d\n", even);
    printf(" Odd: %d\n", odd);
    printf(" Positive: %d\n", positive);
    printf(" Negative: %d\n", negative);
    return 0;
}