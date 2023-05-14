#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int sum, a, b, c, missing = 0;
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        int total = a + b + c;
        missing = sum - total;
        printf("%d\n", missing);
    }

    return 0;
}
