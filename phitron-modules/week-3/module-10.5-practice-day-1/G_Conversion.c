// #include <stdio.h>
// int main()
// {
//     int i, len = 0;
//     char str[] = "Great Power";

//     // Calculating length of the array
//     len = sizeof(str) / sizeof(str[0]);

//     // Checks every character in the array
//     for (i = 0; i < len; i++)
//     {

//         // Checks whether a character is upper case character
//         if (isupper(str[i]))
//         {
//             // Convert that charcter to lower case
//             str[i] = tolower(str[i]);
//         }
//         // Checks whether a character is lower case character
//         else if (islower(str[i]))
//         {
//             // Convert that charcter to upper case
//             str[i] = toupper(str[i]);
//         }
//     }
//     printf("String after case conversion : %s", str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void main()
// {
//     char str[100];
//     int ctr, ch, i;
//     printf("Input the string : ");
//     fgets(str, sizeof str, stdin);

//     i = strlen(str);

//     ctr = i;

//     printf("%s", str);

//     for (i = 0; i < ctr; i++)
//     {
//         ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
//         putchar(ch);
//     }
// }

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000001
int main()
{
    char s[MAX_LENGTH];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s", s);
    // printf("%d\n", ',');
    // printf("%d\n", ' ');
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX_LENGTH 1000001

// int main()
// {
//     char s[MAX_LENGTH];
//     if (fgets(s, sizeof(s), stdin) != NULL)
//     {
//         for (int i = 0; i < strlen(s); i++)
//         {
//             if (islower(s[i]))
//             {
//                 s[i] = toupper(s[i]);
//             }
//             else if (s[i] == ',')
//             {
//                 s[i] = ' ';
//             }
//             else
//             {
//                 s[i] = tolower(s[i]);
//             }
//         }
//         s[strlen(s) - 1] = '\0'; // add null terminator
//         printf("%s", s);
//     }
//     return 0;
// }
