#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    scanf("%s", ch);
    int cnt[10] = {0};
    for (int i = 0; i < strlen(ch); i++)
    {
        // int val = ch[i] - 97;
        int val = ch[i] - 'a';
        // printf("%d\n", val);
        cnt[val]++;
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     if (cnt[i] != 0)
    //     {
    //         printf("%c %d\n", i + 'a', cnt[i]);
    //     }
    //     // printf("%d\n", i);
    // }

    for (int i = 0; i < strlen(ch); i++)
    {
        int value = ch[i] - 'a';
        cnt[value]++;
        if (cnt[value] != 0)
        {
            printf("%c %d\n", i + 'a', cnt[i]);
        }

        cnt[value] = 0;
    }

    return 0;
}
