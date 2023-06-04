/*
 * C program to find the sum of all digits present in the string
 */
// #include <stdio.h>
// void main()
// {
//     char string[80];
//     int count, nc = 0, sum = 0;

//     printf("Enter the string containing both digits and alphabet \n");
//     scanf("%s", string);
//     for (count = 0; string[count] != '\0'; count++)
//     {
//         if ((string[count] >= '0') && (string[count] <= '9'))
//         {
//             nc += 1;
//             sum += (string[count] - '0');
//         }
//     }
//     printf("NO. of Digits in the string = %d\n", nc);
//     printf("Sum of all digits = %d\n", sum);
// }

// #include <stdio.h>

// int main()
// {
//     char str[100];
//     int i, sum = 0;

//     scanf("%s", str);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//         {
//             sum += (str[i] - '0');
//         }
//     }

//     printf("%d", sum);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[10000];
//     int sum = 0;
//     scanf("%s", str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= '0' && str[i] <= '9')
//         {
//             sum += (str[i] - '0');
//         }
//     }
//     printf("%d\n", sum);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     unsigned char str[10];
//     int sum = 0;

//     fgets(str, 100, stdin);
//     str[strcspn(str, "\n")] = '\0';

//     for (const unsigned char *p = str; *p != '\0'; p++)
//     {
//         if (*p >= '0' && *p <= '9')
//         {
//             sum += (*p - '0');
//         }
//     }

//     printf("%d", sum);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "masud";

//     printf("%s\n", str);
//     printf("%d\n", sizeof(str));
//     printf("%d\n", sizeof(char));
//     int sz = sizeof(str) / sizeof(char);
//     printf("%d\n", sz);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[5];
//     scanf("%s", str);
//     printf("%s\n", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    int sum = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        // printf("%d ", str[i]);
        sum += str[i] - 48;
    }
    printf("%d", sum);
}
