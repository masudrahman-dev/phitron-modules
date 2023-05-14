// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int is_pl(char str[], int i, int j)
// {
//     int flag = 0;
//     if (i > j)
//     {
//         return flag;
//     }
//     if (str[i] == str[j])
//     {
//         flag = 1;
//         printf("y\n");
//         printf("%d %d\n", i, j);
//     }

//     // printf("%c ", str[j]);
//     is_pl(str, i + 1, j - 1);
// }
// int main()
// {
//     char str[1001];
//     scanf("%s", &str);
//     printf("%d\n", is_pl(str, 0, strlen(str) - 1));
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int isPalindrome(char *s, int left, int right)
{
    // Base case: if left and right indices cross, string is palindrome
    if (left >= right)
    {
        return 1;
    }
    // Check if left and right characters match
    if (s[left] == s[right])
    {
        // Recursively check next pair of characters
        return isPalindrome(s, left + 1, right - 1);
    }
    else
    {
        // Characters don't match, string is not palindrome
        return 0;
    }
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    if (isPalindrome(s, 0, len - 1))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
