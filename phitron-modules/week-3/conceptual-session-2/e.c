#include <stdio.h>
#include <string.h>

int main()
{
    int small_letter = 0, capital_letter = 0;
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            small_letter++;
        }
        else
        {
            capital_letter++;
        }
    }
    printf("%d\n%d\n", small_letter, capital_letter);
    return 0;
}
