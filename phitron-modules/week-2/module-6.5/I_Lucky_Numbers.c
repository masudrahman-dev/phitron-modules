#include <stdio.h>
int main()
{

    int n, first, last;
    scanf("%d", &n);
    last = n % 10;
    first = n / 10;

    if (last % first == 0 || first % last ==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }

    return 0;
}