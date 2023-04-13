#include <stdio.h>
int main()
{
    int num, max = 0, digit;

    scanf("%d", &num);
    int i = 1;
    while (i <= num)
    {

        scanf("%d", &digit);
        if (max < digit)
        {
            max = digit;
        }

        i++;
    }
    printf("%d\n", max);
    return 0;
}