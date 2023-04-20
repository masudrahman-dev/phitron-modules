#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int capital = 0, small = 0;
    char ch[1001];
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            capital++;
        }
        else
        {
            small++;
        }
    }
    printf("%d %d\n", capital, small);
    return 0;
}
