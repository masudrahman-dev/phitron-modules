#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void solve(int t)
{

    for (int i = t; i >= 1; i--)
    {
        if (i == 1)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    solve(t);
    return 0;
}
