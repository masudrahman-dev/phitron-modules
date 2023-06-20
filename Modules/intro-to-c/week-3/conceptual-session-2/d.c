#include <stdio.h>
#include <string.h>

int main()
{
    char c[20] = "thisisapen";
    // char freq[20] = {0};
    int count = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        // printf("%d\n", i);
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i')
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
