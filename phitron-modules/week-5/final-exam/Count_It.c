#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int capital = 0, small = 0, space = 0;
    char str[1001];
    fgets(str, 1001, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            small++;
        }
        else if (str[i] > 'A' && str[i] < 'Z')
        {
            capital++;
        }
        else if (str[i] == ' ')
        {

            space++;
        }

        // printf("%c-%d\n", str[i], str[i]);
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", capital, small, space);
    // printf("%s %d\n", str, len);
    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char str[1001];
//     int i, small = 0, capital = 0, spaces = 0;
//     fgets(str, sizeof(str), stdin);
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (islower(str[i]))
//             small++;
//         else if (isupper(str[i]))
//             capital++;
//         else if (str[i] == ' ')
//             spaces++;
//     }
//     printf("Capital - %d\n", capital);
//     printf("Small - %d\n", small);
//     printf("Spaces - %d\n", spaces);
//     return 0;
// }
