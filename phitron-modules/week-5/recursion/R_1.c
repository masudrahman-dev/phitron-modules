#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int n)
{
    // printf("%d\n", n);
    int add = 0;
    if (n != 0)
    {
        return add += sum(n - 1) + n;
    }
    return 0;
}
int main()
{
    int n = 5;
    int total = sum(n);
    printf("%d\n", total);

    return 0;
}
// printf("%d\n", n);

// add += sum(n - 1) + n;
// printf("%d\n", add);
/**
 * add = 0
 * 0 + sum(4) = 0 + 5 = 5
 * 5 + sum(3) = 5 + 4 = 9
 * 9 + sum(2) = 9 + 3 = 12
 * 12 + sum(1) = 12 + 2 = 14
 * 14 + sum(0) = 14 + 1 = 15
 */
