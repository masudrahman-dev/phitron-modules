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

// #include <stdio.h>

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

// #include <stdio.h>

// int main()
// {

//     int marks[10], i, n, sum = 0;
//     double average;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     for (i = 0; i < n; ++i)
//     {
//         printf("Enter number%d: ", i + 1);
//         scanf("%d", &marks[i]);

//         // adding integers entered by the user to the sum variable
//         sum += marks[i];
//     }

//     // explicitly convert sum to double
//     // then calculate average
//     average = (double)sum / n;

//     printf("Average = %.2lf", average);

//     return 0;
// }
// #include <stdio.h>
// void display(int age1, int age2)
// {
//     printf("%d\n", age1);
//     printf("%d\n", age2);
// }

// int main()
// {
//     int ageArray[] = {2, 8, 4, 12};

//     // pass second and third elements to display()
//     display(ageArray[1], ageArray[2]);
//     return 0;
// }
// Program to calculate the sum of array elements by passing to a function

// #include <stdio.h>
// float calculateSum(float num[]);

// int main()
// {
//     float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

//     // num array is passed to calculateSum()
//     result = calculateSum(num);
//     printf("Result = %.2f", result);
//     return 0;
// }

// float calculateSum(float num[])
// {
//     float sum = 0.0;

//     for (int i = 0; i < 6; ++i)
//     {
//         sum += num[i];
//     }

//     return sum;
// }

// #include <stdio.h>
// int main()
// {
//     int *pc, c;

//     c = 22;
//     printf("Address of c: %p\n", &c);
//     printf("Value of c: %d\n\n", c); // 22

//     pc = &c;
//     printf("Address of pointer pc: %p\n", pc);
//     printf("Content of pointer pc: %d\n\n", *pc); // 22

//     c = 11;
//     printf("Address of pointer pc: %p\n", pc);
//     printf("Content of pointer pc: %d\n\n", *pc); // 11

// C program to demonstrate the
// declaration, definition and
// initialization

// #include <stdio.h>

// int main()
// {
//     int tk;

//     scanf("%d", &tk);

//     if (tk == 100)
//     {
//         printf("burger khamu\n");
//     }
//     else
//     {
//         printf("burger khamu na\n");
//     }

//     return 0;
// }

// Program to calculate the sum of n numbers entered by the user

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n, i, *ptr, sum = 0;

//   printf("Enter number of elements: ");
//   scanf("%d", &n);

//   ptr = (int*) malloc(n * sizeof(int));

//   // if memory cannot be allocated
//   if(ptr == NULL) {
//     printf("Error! memory not allocated.");
//     exit(0);
//   }

//   printf("Enter elements: ");
//   for(i = 0; i < n; ++i) {
//     scanf("%d", ptr + i);
//     sum += *(ptr + i);
//   }

//   printf("Sum = %d", sum);

//   // deallocating the memory
//   free(ptr);

//   return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char name[30];
//     printf("Enter name: ");
//     fgets(name, sizeof(name), stdin);  // read string
//     printf("Name: ");
//     puts(name);    // display string
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// // create struct with person1 variable
// struct Person {
//   char name[50];
//   int citNo;
//   float salary;
// } person1;

// int main() {

//   // assign value to name of person1
//   strcpy(person1.name, "George Orwell");

//   // assign values to other person1 variables
//   person1.citNo = 1984;
//   person1. salary = 2500;

//   // print struct variables
//   printf("Name: %s\n", person1.name);
//   printf("Citizenship No.: %d\n", person1.citNo);
//   printf("Salary: %.2f", person1.salary);

//   return 0;
// }

// problem 1
// #include<stdio.h>
// int main()
// {
// printf("Recently I heard that you’ve achieved\n95%% marks in your exam.\nThis is brilliant!\nI wish you’ll shine in your life!\tGood\nluck with all the barriers(/\\) in your life.\n");

//  return 0;
// }

// problem 2
// #include <stdio.h>
// int main()
// {
//     int a, b, result;
//     printf("enter a and b\n");
//     scanf("%d %d", &a, &b);

//     result = a + b;
//     printf("%d + %d  = %d\n", a, b, result);
//     result = a - b;
//     printf("%d - %d  = %d\n", a, b, result);
//     result = a * b;
//     printf("%d * %d  = %d\n", a, b, result);
//     result = a / b;
//     printf("%d / %d  = %d\n", a, b, result);
//     result = a % b;
//     printf("%d %% %d  = %d\n", a, b, result);
//     return 0;
// }

// problem 3
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n % 2 == 0)
//     {
//         printf("even\n");
//     }
//     else
//     {
//         printf("odd\n");
//     }

//     return 0;
// }

// problem 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     if (n > 0)
//     {
//         printf("positive\n");
//     }
//     else if (n < 0)
//     {
//         printf("negative\n");
//     }else{
//         printf("zero\n");

//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n > 10000)
//     {
//         printf("Gucci bag\n");
//         if (n > 20000)
//         {
//             printf("Gucci Belt\n");
//         }
//     }
//     else if (n > 5000)
//     {
//         printf("Levis Bag\n");
//     }
//     else
//     {
//         printf("Something\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     if (1)
//     {
//         // code will be execute
//         printf("1\n");
//     }

//     if (0)
//     {
//         // code not execute
//         printf("0\n");
//     }

//     // 1 == true 0 == false

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a=0, i;
//     for (i = 0; i < 5; i++)
//     {
//         continue;
//     }
//     printf("%d %d\n", i, a);

//     return 0;
// }

// continue statement
// #include <stdio.h>

// int main()
// {
//     int a = 0, b = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         if (i != 4)
//         {
//             printf(" before value of a: %d\n", a);
//             a++;
//             printf(" after value of a: %d\n", a);
//             continue;
//             printf(" under continue statement %d \n", i); // under continue statement i != 4
//         }
//         printf("outside continue statement %d \n", i); // this statement is skipped each time i != 5
//     }
//     printf(" final value of a: %d\n", a);

//     printf("\n");

//     for (int j = 0; j < 2; j++)
//     {
//         for (int k = 0; k < 5; k++)
//         { // only this loop is affected by continue
//             if (k == 3)
//             {
//                 printf(" before value of a: %d\n", a);
//                 b++;
//                 printf(" after value of a: %d\n", a);
//                 continue;
//                 printf("under continue statement %d%d \n", j, k); // this statement is skipped each time k == 3
//             }
//             printf("outside continue statement %d%d \n", j, k); // this statement is skipped each time k == 3
//         }
//     }
//     printf(" final value of b: %d\n", b);
// }

// 1. what is even and odd number?
// 2)13(6
//   12
// ------
//    1

// #include <stdio.h>
// int main()
// {

//     int number, result;
//     scanf("%d", &number);
//     // result = number % 2 == 0;
//     if (number > 0)
//     {
//         result = number % 2 == 0;
//         // printf("after check positive %d\n", result);
//         if (result)
//         {
//             printf("even\n");
//         }
//         else
//         {
//             printf("odd\n");
//         }
//     }
//     else
//     {
//         printf("your are given negative number. please enter eny positive number\n");
//     }
//     // printf("before check positive %d\n", result);

//     return 0;
// }
#include <stdio.h>
int main()
{

    int number, result;
    scanf("%d", &number);

        result = number % 2; 
        if (0 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
   

    return 0;
}

// step : 1
// even or odd
// positive

// positive
// if number is positive then check even or odd
