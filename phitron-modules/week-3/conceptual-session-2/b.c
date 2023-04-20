#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    int freq[26] = {0};
    while (scanf("%c", &ch) != EOF)
    {
        freq[ch - 97]++;
    }
    for (char i = 97; i <= 122; i++)
    {
        if (freq[i - 97]  != 0)
        {
            printf("%c : %d\n", i, freq[i - 97]);
        }
    }

    return 0;
}
