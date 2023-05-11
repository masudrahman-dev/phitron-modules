#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char arr[])
{
    int i = 0;
    int j = strlen(arr) - 1;
    // printf("%d\n", j);
    int flag = 0;
    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            flag = 0;
            // printf("%d %d\n", arr[i], arr[j]);
        }
        else
        {
            flag = 1;
        }
        i++;
        j--;
    }
    return flag;
}
int main()
{
    char arr[11];
    scanf("%s", arr);
    int flag = is_palindrome(arr);
    if (flag)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}
