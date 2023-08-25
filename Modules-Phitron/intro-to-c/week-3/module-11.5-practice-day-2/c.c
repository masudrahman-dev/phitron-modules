#include <stdio.h>
int main()
{
    int n, d1, d2;
    scanf("%d", &n);
    d2 = n % 10;
    d1 = n / 10;
    if (d2 % d1 == 0 || d1 % d2 == 0)
    {
        printf("YES\n");
    }
    else
    {

        printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int di1, di2;
    di1 = n / 10;
    di2 = n % 10;
    if (di1 % di2 == 0 || di2 % di1 == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}

#include <stdio.h>
int main()
{

    int n, first, last;
    scanf("%d", &n);
    last = n % 10;
    first = n / 10;

    if (last % first == 0 || first % last == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }

    return 0;
}