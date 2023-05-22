// #include <stdio.h>
// #include <string.h>
// #define MAX_LENGTH 100
// int main()
// {
//     char str[MAX_LENGTH];
//     char str_copy[MAX_LENGTH];
//     fgets(str, sizeof(str), stdin);
//     int len = strlen(str);
//     int i = 0;
//     while (i < len)
//     {
//         str_copy[i] = str[i];
//         i++;
//     }
//     int j = 0;
//     while (j < len - 1)
//     {
//         int temp = str_copy[j];
//         str_copy[j] = str_copy[len];
//         str_copy[len] = temp;
//         j++;
//         len--;
//     }

//     if (strcmp(str, str_copy) == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     printf("%s", str_copy);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define MAX_LENGTH 101

// int main()
// {
//     char str[MAX_LENGTH];
//     char str_copy[MAX_LENGTH + 1]; // add room for null terminator
//     fgets(str, sizeof(str), stdin);
//     int len = strlen(str);
//     int i = 0;
//     while (i < len)
//     {
//         str_copy[i] = str[i];
//         i++;
//     }
//     str_copy[len] = '\0'; // add null terminator
//     int j = 0;
//     while (j < len / 2)
//     { // only need to swap first half of string
//         int temp = str_copy[j];
//         str_copy[j] = str_copy[len - 1 - j]; // use correct indices for swapping
//         str_copy[len - 1 - j] = temp;
//         j++;
//     }

//     if (strcmp(str, str_copy) == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     // printf("%s", str_copy);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main()
{
    char str[MAX_LENGTH + 1];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int i = 0;
    int j = len - 2; // -2 to ignore newline character and move j to last character
    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("NO\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES\n");
    return 0;
}
