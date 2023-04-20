#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    char arr[1001];
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
