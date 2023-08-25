#include <stdio.h>

int countDivisions(long long int x)
{
    int count = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        count++;
    }
    return count;
}

int main()
{
    int N;
    scanf("%d", &N);

    long long int numbers[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &numbers[i]);
    }

    int maxDivisions = 0;
    for (int i = 0; i < N; i++)
    {
        int divisions = countDivisions(numbers[i]);
        if (divisions > maxDivisions)
        {
            maxDivisions = divisions;
        }
    }

    printf("%d\n", maxDivisions);

    return 0;
}
