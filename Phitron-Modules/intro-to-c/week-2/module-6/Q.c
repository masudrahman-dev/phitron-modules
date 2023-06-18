// // C program to reverse digits of a number
// #include <stdio.h>

// /* Recursive function to reverse digits of num*/
// int reverseDigits(int num)
// {
//     static int rev_num = 0;
//     static int base_pos = 1;
//     if (num > 0)
//     {
//         reverseDigits(num / 10);
//         rev_num += (num % 10) * base_pos;
//         base_pos *= 10;
//     }
//     return rev_num;
// }

// /*Driver program to test reverse Digits*/
// int main()
// {
//     int num = 4562;
//     printf("Reverse of no. is %d", reverseDigits(num));

//     getchar();
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int num, ans = 0;

//         // get input from user
//         scanf("%d", &num);

//     // do till num > 0
//     while (num > 0)
//     {
//         // split the last digit
//         int mod = num % 10;

//         // multiply ans with 10 and add the splitted digit
//         ans = ans * 10 + mod;

//         // divide num by 10
//         num = num / 10;
//     }

//     // print the reversed number
//     printf("Reversed Number is %d\n", ans);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // variable ans will have the reversed number
//     int num, ans = 0, copy;

//     // get input from user
//     scanf("%d", &num);

//     // assigning num value to variable copy for checking
//     // Because after while loop num value becomes zero.
//     copy = num;

//     // do till num > 0
//     while (num > 0)
//     {
//         // split the last digit
//         int mod = num % 10;

//         // multiply ans with 10 and add the splitted digit
//         ans = ans * 10 + mod;

//         // divide num by 10
//         num = num / 10;
//     }

//     // if both reversed and original number are equal, print palindrome

//     if (ans == copy)
//         printf("Palindrome\n");
//     else
//         printf("Non-Palindrome\n"); // otherwise print non-palindrome

//     return 0;
// }

// #include <stdio.h>

// // Compiler version gcc 6.3.0

// int main()
// {
//     int n, y, k, t;
//     n = 134;
//     y = 0;
//     while (n != 0)
//     {
//         k = n % 10;
//         n = n / 10;
//         y = y * 10 + k;
//     }

//     // sepetrate
//     while (y != 0)
//     {
//         t = y % 10;
//         y = y / 10;
//         printf("%d\n", t);
//     }
//     return 0;
// }

// Let the number be 'num'
// This program prints the digits in reverse order.
// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     while (num)
//     {
//         printf("%d ", num % 10);
//         num = num / 10;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    // int num, last_digit, rev_num;
    int num, last_digit;

    scanf("%d", &num);
    while (num)
    {

        last_digit = num % 10;
        printf(" %d ", last_digit);
        num = num / 10;
        // rev_num = rev_num * 10 + last_digit;
        // printf("rev_num %d\n", rev_num);
    }

    // while (rev_num)
    // {
    //     rev_num = rev_num / 10;
    //     printf("rev_num %d\n", rev_num);
    // }

    // printf("last_digit %d\n", last_digit);
    // printf("num %d\n", num);

    return 0;
}