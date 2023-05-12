#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int add = sum(x, y);
    printf("%d\n", add);
    return 0;
}
