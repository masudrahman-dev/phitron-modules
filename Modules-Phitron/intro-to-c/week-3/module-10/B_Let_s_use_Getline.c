// #include<stdio.h>

// int main()
// {
//     char str[6] = "Hello";
//     int i;

//     /*
//      * str+0 will print "Hello"
//      * str+1 will print "ello"
//      * str+2 will print "llo"
//      * str+3 will print "lo"
//      * str+4 will print "o"
//      */
//     for(i = 0; str[i]; i++)
//         printf("%s\n",str+i);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[1000000];
//     fgets(s, sizeof(s), stdin);

//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] == '\\')
//         {
//             break;
//         }
//         printf("%c", s[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\\'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
