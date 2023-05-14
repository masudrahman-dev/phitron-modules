#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void solve(int t)
{
    for (int i = 1; i <= t; i++)
    {
        printf("%d\n", i);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    solve(t);
    return 0;
}
