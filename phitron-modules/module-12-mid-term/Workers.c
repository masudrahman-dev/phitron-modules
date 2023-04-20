#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m1, m2, d, result = 0;
    scanf("%d%d%d", &m1, &m2, &d);
    result = (m1 * d) / m2;
    printf("%d\n", result);
    return 0;
}
