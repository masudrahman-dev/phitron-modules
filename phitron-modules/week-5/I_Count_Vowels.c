// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// int count = 0;
// int count_vowels(char arr[], int i)
// {
//     int len = strlen(arr);
//     if (len == i)
//     {
//         return 0;
//     }

//     // printf("%d\n", 'c');
//     if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
//     {
//         count++;
//         // printf("%c\n", arr[i]);
//     }
//     count_vowels(arr, ++i);
// }
// int main()
// {
//     char arr[201];
//     int i = 0;

//     fgets(arr, 201, stdin);
//     count_vowels(arr, i);
//     printf("%d\n", count);

//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char str[], int len, int i, int count)
{
    if (i == len)
    {
        return count;
    }
    if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
    {
        count++;
    }
    return count_vowels(str, len, i + 1, count);
}

int main()
{
    char str[201];
    fgets(str, 201, stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    int num_vowels = count_vowels(str, len, 0, 0);
    printf("%d\n", num_vowels);
    return 0;
}
