#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char arr[100] = "appleorangezebra";
    // scanf("%s", arr);
    int freq[26] = {0};
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c\n", arr[i]);
        // char val = arr[i];
        // freq[val - 'a']++;
    }

    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     printf("%c - %d\n", i, freq[i - 'a']);
    // }

    return 0;
}
