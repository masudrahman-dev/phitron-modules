// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char ch[100000];
//     scanf("%s", ch);
//     // int cnt[100000] = {0};
//     // for (int i = 0; i < strlen(ch); i++)
//     // {
//     //     // int val = ch[i] - 97;
//     //     int val = ch[i] - 'a';
//     //     // printf("%d\n", val);
//     //     cnt[val]++;
//     // }

//     printf("%s\n", cnt);

//     // for (int i = 0; i < 9; i++)
//     // {
//     //     if (cnt[i] != 0)
//     //     {
//     //         printf("%c %d\n", i + 'a', cnt[i]);
//     //     }
//     //     // printf("%d\n", i);
//     // }

//     // for (int i = 0; i < strlen(ch); i++)
//     // {
//     //     int value = ch[i] - 'a';
//     //     cnt[value]++;
//     //     if (cnt[value] != 0)
//     //     {
//     //         printf("%c %d\n", i + 'a', cnt[i]);
//     //     }

//     //     cnt[value] = 0;
//     // }

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // initializing variables
//     char str[100] = "hellothere";
//     int freq[256] = {0};
//     // calculating frequency of each character
//     for (int i = 0; str[i] == '\0'; i++)
//     {
//         freq[str[i]]++;
//     }
//     // printing frequency of each character
//     for (int i = 0; i < 256; i++)
//     {
//         if (freq[i] != 0)
//         {
//         }
//         printf("%d\n", freq[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     // char str[100] = "hellothereiamhere";
//     // char ch = 'a';
//     // int count = 0;
//     // for (int i = 0; str[i] != '\0'; i++)
//     // {
//     //     if (str[i] == ch)
//     //     {
//     //         count++;
//     //     }
//     // }
//     // printf("%d\n", count);

//     // char str[100] = "this string contains many alphabets";
//     char str[1000000];
//     scanf("%s", str);
//     int alphabet[26] = {0};
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             int j = str[i] - 'a';
//             ++alphabet[j];
//         }
//         ++i;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (alphabet[i] != 0)
//         {
//             printf("%c : %d\n", i + 'a', alphabet[i]);
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char c;
//     int alphabet[26] = {0};
//     while (scanf("%c", &c) != EOF)
//     {
//         alphabet['a' - 'a']++;
//         alphabet[0];
//     }
//     for (int i = 'a'; i <= 'z'; i++)
//     {
//         if (alphabet[i - 'a'] > 0)
//         {
//             printf("%c : %d\n", i, alphabet[i - 'a']);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {

  
    // while ()
    // {
    //     alphabet['a' - 'a']++;
    //     alphabet[0];
    // }
    // for (int i = 'a'; i <= 'z'; i++)
    // {
    //     if (alphabet[i - 'a'] > 0)
    //     {
    //         printf("%c : %d\n", i, alphabet[i - 'a']);
    //     }
    // }

//     return 0;
// }