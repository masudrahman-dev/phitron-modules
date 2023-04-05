#include <stdio.h>
#include <ctype.h>
int main()
{
    // char c;
    // scanf("%c", &c);
    // if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
    // {
    //     printf("alphabet\n");
    // }
    // else
    // {
    //     printf("not alphabet\n");
    // }
    // if (isalpha(c) == 0)
    // {
    //     printf("%c is not alphabet\n");
    // }
    // else
    // {
    //     printf("%c is alphabet\n");
    // }

    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));

    c = '+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

    return 0;
}
