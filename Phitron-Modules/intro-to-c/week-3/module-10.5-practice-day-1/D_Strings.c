// #include <stdio.h>
// #include <string.h>
// #define max_length 11
// int main()
// {
//     char s_1[max_length];
//     char s_2[max_length];
//     fgets(s_1, sizeof(s_1), stdin);
//     fgets(s_2, sizeof(s_2), stdin);
//     int len1 = strlen(s_1);
//     int len2 = strlen(s_2);
//     // Removing newline characters from the end of the strings
//     s_1[strcspn(s_1, "\n")] = 0;
//     s_2[strcspn(s_2, "\n")] = 0;

//     strcat(s_1, s_2);

//     printf("%d %d\n", len1, len2);
//     printf("%s\n", s_1);
//     int temp = s_1[0];
//     s_1[0] = s_2[0];
//     s_2[0] = temp;
//     printf("%s %s", s_1 , s_2);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define MAX_LENGTH 11

// int main()
// {
//     char str1[MAX_LENGTH];
//     char str2[MAX_LENGTH];
//     char temp;

//     // Reading the input strings
//     // printf("Enter the first string (A): ");
//     fgets(str1, sizeof(str1), stdin);

//     // printf("Enter the second string (B): ");
//     fgets(str2, sizeof(str2), stdin);

//     // Removing the newline character from the end of the strings
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';

//     // Printing the size of the strings
//     printf("%ld %ld\n", strlen(str1), strlen(str2));

//     // Concatenating the two strings
//     strcat(str1, str2);
//     printf("%s\n", str1);

//     // Swapping the first characters of the two strings
//     temp = str1[0];
//     str1[0] = str2[0];
//     str2[0] = temp;

//     printf("%s %s", str1, str2);

//     return 0;
// }
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10

int main()
{
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    char str3[MAX_LENGTH ];
    char temp;

    // Reading the input strings
    // printf("Enter the first string (A): ");
    fgets(str1, sizeof(str1), stdin);

    // printf("Enter the second string (B): ");
    fgets(str2, sizeof(str2), stdin);

    // Removing the newline character from the end of the strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Printing the size of the strings
    printf("%d %d\n", strlen(str1), strlen(str2));


    sprintf(str3, "%s%s", str1, str2);
    printf("%s\n", str3);
    // Swapping the first characters of the two strings
    temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    // Printing the swapped strings, starting from the second character of str1
    printf("%s %s", str1, str2);

    return 0;
}
