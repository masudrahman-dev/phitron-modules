// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char c;
//     int alphabet[26] = {0};
//     while (scanf("%c", &c) != EOF)
//     {
//         alphabet[c - 'a']++;
//     }
//     for (int i = 'a'; i <= 'z'; i++)
//     {
//         if (alphabet[i - 'a'] != 0)
//         {
//             printf("%c : %d\n", i + 'a', alphabet[i - 'a']);
//         }
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main()
{
    int count[26] = {0}; // initialize count of each letter to 0
    scanf("%s", S);
    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        count[S[i] - 'a']++; // increment count of the corresponding letter
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        { // print only if the letter occurred in S
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}
