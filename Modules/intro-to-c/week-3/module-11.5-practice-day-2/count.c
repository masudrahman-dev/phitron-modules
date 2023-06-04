#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c[10] = {'a', 'a', 'a', 'd', 'e', 'f', 'd', 'e', 'f', '\0'};
    int alphabet[12] = {0};
    int len = strlen(c);
    // printf("%d\n", len);

    for (int i = 0; i < len; i++)
    {
        int c_index = c[i];
        alphabet[c_index - 'a']++;

    }





    
        //  2++ = 3
        //  int ch = c[i];
        //  alphabet[c[i] - 97]++;//2++ = 3
        //  alphabet[ch - 97]++;//2++ = 3
        //  alphabet[97 - 97]++;//2++ = 3
        //  2++; //alphabet[0]++
        //  int val = 2; //alphabet[0]
        //  val++;
        //  printf("%d\n", val);
    // for (int i = 'a'; i <= 'z'; i++)
    // {
    //     if (alphabet[i - 'a'] > 0)
    //     {
    //         printf("%c : %d\n", i, alphabet[i - 'a']);
    //     }
    // }

    return 0;
}
