#include <stdio.h>
int main()
{
    char ch, pUpr, pLwr;

    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        pLwr = ch + 32;
        printf("%c\n",pLwr);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        pUpr = ch - 32;
        printf("%c\n",pUpr);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}