#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char ch[102];
        scanf("%s", ch);
        int size = strlen(ch);
        if (size > 10)
        {
            printf("%c%d%c\n", ch[0], size - 2, ch[size - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}
