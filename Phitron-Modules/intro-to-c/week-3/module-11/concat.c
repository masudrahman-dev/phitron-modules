#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // int a_len = strlen(a);
    // for (int i = 0; i < strlen(b); i++)
    // {
    //     a[a_len] = b[i];
    //     a_len++;
    // }
    strcat(a, b);
    printf("%s\n", a);

    return 0;
}
