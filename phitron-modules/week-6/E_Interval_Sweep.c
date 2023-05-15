
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    // Check if it is possible to create an interval with the required numbers of odd and even numbers
    if (a == 0 && b == 0)
    {
        printf("NO");
    }
    else if (abs(a - b) == 1 || abs(a - b) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
