#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pnt(int n)
{
    if (n > 0)
    {
        int x;
        for (int i = n; i >= 0; i--)
        {
            x = i;
            printf("%d ", x--);
        }
        for (int i = 0; i < n; i++)
        {

            printf("%d ", x--);
        }
    }
    else
    {
        int x;
        for (int i = n; i < 0; i++)
        {
            x = i;
            printf("%d ", x++);
        }
        for (int i = 0; i >= n; i--)
        {
            printf("%d ", x++);
        }
    }
}
int main()
{
    int n = -7;
    pnt(n);

    return 0;
}
