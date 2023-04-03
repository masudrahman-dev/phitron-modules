// #include <stdio.h>

// int main()
// {
//     int age = 123;
//     float price = 23.43;
//     // char name = 'r';
//     char name[] = "Musud";

//     printf("%d %f %s", age, price, name);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int age = 123;
//     float price = 23.43;
//     char name[] = "Masud";

//     printf("%d %f %s", age, price, name);

//     return 0;
// }
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdalign.h>

// int main(void)
// {
//     printf("%d %d %d\n", true && false, true || false, !false);
//     printf("%d %d\n", true ^ true, true + true);
//     printf("%zu\n", alignof(short));
// }
// #include <stdio.h>

// int main(void)
// {
//     // integers
//     int i = 1, j = 2, k = 3; // initialization, not assignment

//     i = j = k; // values of i and j are now 3
//                //  (i = j) = k; // Error: lvalue required
//     printf("%d %d %d\n", i, j, k);

//     // pointers
//     const char c = 'A';    // initialization; not assignment
//     const char *p = &c;    // initialization; not assignment
//     const char **cpp = &p; // initialization; not assignment

//     //  cpp = &p;   // Error: char** is not convertible to const char**
//     *cpp = &c; // OK, char* is convertible to const char*
//     printf("%c \n", **cpp);
//     cpp = 0; // OK, null pointer constant is convertible to any pointer

//     // arrays
//     int arr1[2] = {1, 2}, arr2[2] = {3, 4};
//     //  arr1 = arr2; // Error: cannot assign to an array
//     printf("arr1[0]=%d arr1[1]=%d arr2[0]=%d arr2[1]=%d\n",
//            arr1[0], arr1[1], arr2[0], arr2[1]);

//     struct
//     {
//         int arr[2];
//     } sam1 = {{5, 6}}, sam2 = {{7, 8}};
//     sam1 = sam2; // OK: can assign arrays wrapped in structs

//     printf("%d %d \n", sam1.arr[0], sam1.arr[1]);
// }

#include <stdio.h>

// int main(void)
// {
//     int x = 10;
//     int hundred = 100;
//     int ten = 10;
//     int fifty = 50;

//     printf("%d %d %d %d\n", x, hundred, ten, fifty);

//     hundred *= x;
//     ten /= x;
//     fifty %= x;

//     printf("%d %d %d %d\n", x, hundred, ten, fifty);

//     return 0;
// }

// #include <stdbool.h>
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     bool b = !(2 + 2 == 4); // not true
//     printf("!(2+2==4) = %s\n", b ? "true" : "false");

//     int n = isspace('a'); // zero if 'a' is a space, nonzero otherwise
//     int x = !!n;          // "bang-bang", common C idiom for mapping integers to [0,1]
//                           // (all non-zero values become 1)
//     char *a[2] = {"nonspace", "space"};
//     printf("%s\n", a[x]); // now x can be safely used as an index to array of 2 ints
// }

// #include <stdio.h>

// int main(void)
// {
//     short x;
//     // type argument:
//     printf("sizeof(float)          = %zu\n", sizeof(float));
//     printf("sizeof(void(*)(void))  = %zu\n", sizeof(void (*)(void)));
//     printf("sizeof(char[10])       = %zu\n", sizeof(char[10]));
//     //  printf("sizeof(void(void))     = %zu\n", sizeof(void(void))); // Error: function type
//     //  printf("sizeof(char[])         = %zu\n", sizeof(char[])); // Error: incomplete type

//     // expression argument:
//     printf("sizeof 'a'             = %zu\n", sizeof 'a'); // type of 'a' is int
//                                                           //  printf("sizeof main            = %zu\n", sizeof main); // Error: Function type
//     printf("sizeof &main           = %zu\n", sizeof &main);
//     printf("sizeof \"hello\"         = %zu\n", sizeof "hello"); // type is char[6]
//     printf("sizeof x               = %zu\n", sizeof x);         // type of x is short
//     printf("sizeof (x+1)           = %zu\n", sizeof(x + 1));    // type of x+1 is int
// }

// #include <inttypes.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <stddef.h>
// #include <uchar.h>
// #include <locale.h>
// int main(void)
// {
//     char s1[] = "a猫🍌"; // or "a\u732B\U0001F34C"
// #if __STDC_VERSION__ > 201710L
//     char8_t
// #else
//     char
// #endif
//         s2[] = u8"a猫🍌";
//     char16_t s3[] = u"a猫🍌";
//     char32_t s4[] = U"a猫🍌";
//     wchar_t s5[] = L"a猫🍌";

//     setlocale(LC_ALL, "en_US.utf8");
//     printf("  \"%s\" is a char[%zu] holding     { ", s1, sizeof s1 / sizeof *s1);
//     for (size_t n = 0; n < sizeof s1 / sizeof *s1; ++n)
//         printf("0x%02X ", +(unsigned char)s1[n]);
//     puts("}");
//     printf(
// #if __STDC_VERSION__ > 201710L
//         "u8\"%s\" is a char8_t[%zu] holding  { "
// #else
//         "u8\"%s\" is a char[%zu] holding     { "
// #endif
//         ,
//         s2, sizeof s2 / sizeof *s2);
//     for (size_t n = 0; n < sizeof s2 / sizeof *s2; ++n)
// #if __STDC_VERSION__ > 201710L
//         printf("0x%02X ", s2[n]);
// #else
//         printf("0x%02X ", +(unsigned char)s2[n]);
// #endif
//     puts("}");
//     printf(" u\"a猫🍌\" is a char16_t[%zu] holding { ", sizeof s3 / sizeof *s3);
//     for (size_t n = 0; n < sizeof s3 / sizeof *s3; ++n)
//         printf("0x%04" PRIXLEAST16 " ", s3[n]);
//     puts("}");
//     printf(" U\"a猫🍌\" is a char32_t[%zu] holding { ", sizeof s4 / sizeof *s4);
//     for (size_t n = 0; n < sizeof s4 / sizeof *s4; ++n)
//         printf("0x%08" PRIXLEAST32 " ", s4[n]);
//     puts("}");
//     printf(" L\"%ls\" is a wchar_t[%zu] holding  { ", s5, sizeof s5 / sizeof *s5);
//     for (size_t n = 0; n < sizeof s5 / sizeof *s5; ++n)
//         printf("0x%08X ", (unsigned)s5[n]);
//     puts("}");
// }
// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

// #include <stdio.h>

// int main()
// {

//     const int maxInput = 100;
//     int i;
//     double number, average, sum = 0.0;

//     for (i = 1; i <= maxInput; ++i)
//     {
//         printf("%d. Enter a number: ", i);
//         scanf("%lf", &number);

//         // go to jump if the user enters a negative number
//         if (number < 0.0)
//         {
//             goto jump;
//         }
//         sum += number;
//     }

// jump:
//     average = sum / (i - 1);
//     printf("Sum = %.2f\n", sum);
//     printf("Average = %.2f", average);

//     return 0;
// }

// #include <stdio.h>

// void checkPrimeNumber();

// int main()
// {
//     checkPrimeNumber(); // argument is not passed
//     return 0;
// }

// // return type is void meaning doesn't return any value
// void checkPrimeNumber()
// {
//     int n, i, flag = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1)
//         flag = 1;

//     for (i = 2; i <= n / 2; ++i)
//     {
//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//         printf("%d is not a prime number.", n);
//     else
//         printf("%d is a prime number.", n);
// }
// #include <stdio.h>
// int getInteger();

// int main()
// {

//     int n, i, flag = 0;

//     // no argument is passed
//     n = getInteger();

//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1)
//         flag = 1;

//     for (i = 2; i <= n / 2; ++i)
//     {
//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//         printf("%d is not a prime number.", n);
//     else
//         printf("%d is a prime number.", n);

//     return 0;
// }

// // returns integer entered by the user
// int getInteger()
// {
//     int n;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     return n;
// }
// #include <stdio.h>
// void checkPrimeAndDisplay(int n);

// int main()
// {

//     int n;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // n is passed to the function
//     checkPrimeAndDisplay(n);

//     return 0;
// }

// // return type is void meaning doesn't return any value
// void checkPrimeAndDisplay(int n)
// {
//     int i, flag = 0;

//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1)
//         flag = 1;

//     for (i = 2; i <= n / 2; ++i)
//     {
//         if (n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//         printf("%d is not a prime number.", n);
//     else
//         printf("%d is a prime number.", n);
// }
// #include <stdio.h>
// int checkPrimeNumber(int n);

// int main()
// {

//     int n, flag;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // n is passed to the checkPrimeNumber() function
//     // the returned value is assigned to the flag variable
//     flag = checkPrimeNumber(n);

//     if (flag == 1)
//         printf("%d is not a prime number", n);
//     else
//         printf("%d is a prime number", n);

//     return 0;
// }

// // int is returned from the function
// int checkPrimeNumber(int n)
// {

//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1)
//         return 1;

//     int i;

//     for (i = 2; i <= n / 2; ++i)
//     {
//         if (n % i == 0)
//             return 1;
//     }

//     return 0;
// }
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

// #include <stdio.h>

// int main()
// {

//     int values[5];

//     printf("Enter 5 integers: \n");

//     // taking input and storing it in an array
//     for (int i = 0; i < 5; ++i)
//     {
//         scanf("%d", &values[i]);
//     }

//     printf("Displaying integers: ");

//     // printing elements of an array
//     for (int i = 0; i < 5; ++i)
//     {
//         printf("%d\n", values[i]);
//     }
//     return 0;
// }
// Program to find the average of n numbers using arrays

#include <stdio.h>

int main()
{

    int marks[10], i, n, sum = 0;
    double average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &marks[i]);

        // adding integers entered by the user to the sum variable
        sum += marks[i];
    }

    // explicitly convert sum to double
    // then calculate average
    average = (double)sum / n;

    printf("Average = %.2lf", average);

    return 0;
}
