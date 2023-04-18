// // finding the length of a string using a user-defined function

// #include <stdio.h>

// // The User-defined method
// int str_length(char str[])
// {
//     // initializing count variable (stores the length of the string)
//     int count;

//     // incrementing the count till the end of the string
//     for (count = 0; str[count] != '\0'; ++count)
//         ;

//     // returning the character count of the string
//     return count;
// }

// // Driver code
// int main()
// {
//     // initializing the array to store string characters
//     char str[1000];

//     // inputting the string
//     printf("Enter the string: ");
//     scanf("%s", str);

//     // assigning the count of characters in the string to the length of the string
//     int length = str_length(str);

//     //  printing the length of string
//     printf("The length of the string is %d", length);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[1000];
//     scanf("%s", str);
//     int length;
//     length = strlen(str);
//     printf("length is %d\n", str);
//     return 0;
// }

// finding the length of a string using the strlen() function from the string.h library

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[1000];
//     printf("Enter the string: ");
//     scanf("%s", str);
//     int length;
//     length = strlen(str);
//     printf("The length of the string is %d", length);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     scanf("%s", str);
//     int length = strlen(str);
//     printf("%d\n", length);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "level";
//     int len = sizeof(str);
//     printf("%d\n", len-1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "programming is fun";
//     int i;
//     for (i = 0; str[i] != '\0'; ++i)
//     {
//     }

//     printf("%d\n", i);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char s[] = "Programming is fun";
//     int i;

//     for (i = 0; s[i] != '\0'; ++i)
//         ;

//     printf("Length of the string: %d", i);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[1000];
//     int i;
//     scanf("%d", str);
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         /* code */
//     }
//     printf("%d\n", i);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[1000];
//     scanf("%s", str);
//     printf("%ld\n", strlen(str));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "level up";
//     printf("%s\n", str);

//     printf("%ld\n", sizeof(str) - 1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[1000];
//     int len;
//     gets(s);
//     len = strlen(s);
//     printf("%d\n", len);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[1000];
//     int c = 0;
//     gets(str);
//     while (str[c] != '\0')
//     {
//         c++;
//     }
//     printf("%d\n", c);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int string_length(char *);
// int main()
// {
//     char str[1000];
//     gets(str);
//     printf(" length is = %d\n", string_length(str));

//     return 0;
// }

// int string_length(char *str)
// {
//     if (*str == '\0')
//     {
//         return 0;
//     }
//     return (1 + string_length(str++))
// }

// #include <stdio.h>
// int string_length(char *);

// int main()
// {
//     char s[100];

//     gets(s);

//     printf("Length = %d\n", string_length(s));

//     return 0;
// }

// int string_length(char *s)
// {
//     if (*s == '\0') // Base condition
//         return 0;

//     return (1 + string_length(++s));
// }

/**
 * C program to find length of a string using while loop
 */

// #include <stdio.h>
// #define MAX_SIZE 100 // Maximum size of the string

// int main()
// {
//     char text[MAX_SIZE]; /* Declares a string of size 100 */
//     int index = 0;

//     /* Input string from user */
//     printf("Enter any string: ");
//     gets(text);

//     /* Iterate though last element of the string */
//     while (text[index] != '\0')
//     {
//         index++;
//     }

//     printf("Length of '%s' = %d", text, index);

//     return 0;
// }

/**
 * C program to find length of a string
 */

// #include <stdio.h>
// #define MAX_SIZE 100 // Maximum size of the string

// int main()
// {
//     char text[MAX_SIZE]; /* Declares a string of size 100 */
//     int index = -1;

//     /* Input string from user */
//     printf("Enter any string: ");
//     gets(text);

//     /* Iterate though last element of the string */
//     while (text[++index] != '\0')
//         ;

//     printf("Length of '%s' = %d", text, index);

//     return 0;
// }

/**
 * C program to find length of a string using pointer
 */

// #include <stdio.h>
// #define MAX_SIZE 100 // Maximum size of the string

// int main()
// {
//     char text[MAX_SIZE]; /* Declares a string of size 100 */
//     char *str = text;    /* Declare pointer that points to text */
//     int count = 0;

//     /* Input string from user */
//     printf("Enter any string: ");
//     gets(text);

//     /* Iterate though last element of the string */
//     while (*(str++) != '\0')
//         count++;

//     printf("Length of '%s' = %d", text, count);

//     return 0;
// }

/**
 * C program to find length of a string using strlen() function
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum size of string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    int length;

    printf("Enter any string: ");
    gets(text);

    /* Call strlen() function to count length of string */
    length = strlen(text);

    printf("Length of '%s' = %d", text, length);

    return 0;
}