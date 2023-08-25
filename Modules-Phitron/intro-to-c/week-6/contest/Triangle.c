#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    if (a == b && b == c && c == a && sum != 0)
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");
    }

    return 0;
}
