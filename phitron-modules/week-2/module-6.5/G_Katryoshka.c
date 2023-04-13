// // #include <stdio.h>
// // int main()
// // {
// //     // int e = 90, m = 24, b = 80, Katryoshka = 0;
// //     int e, m, b, Katryoshka = 0, find= 0;
// //     scanf("%d %d %d", &e, &m, &b);

// //     while ((e != 0 && b != 0))
// //     {
// //         if (e == 0 || b ==0 )
// //         {
// //             break;
// //         }

// //         if (e >= 1 && m >= 1 && b >= 1)
// //         {
// //             ++Katryoshka;
// //             e--;
// //             m--;
// //             b--;
// //         }
// //         else if (e >= 2 && b >= 1)
// //         {
// //             ++Katryoshka;
// //             e = e - 2;
// //             b--;
// //         }
// //     }
// //     printf("%d\n", Katryoshka);

// //     return 0;
// // }

// #include <stdio.h>

// // // Loop until there are not enough objects to create a Katryoshka
// // while (e >= 1 && m >= 1 && b >= 1)
// // {
// //     ++KatryoshkaOne;
// //     e--;
// //     m--;
// //     b--;
// // }

// // // Try to create more Katryoshka objects with remaining objects
// // while (e >= 2 && b >= 1)
// // {
// //     ++KatryoshkaTwo;
// //     e -= 2;
// //     b--;
// // }

// int main()
// {
//     long long e, m, b, KatryoshkaOne = 0, KatryoshkaTwo = 0, final;

//     // Read input values
//     scanf("%lld %lld %lld", &e, &m, &b);

//     while (e > 0 && b > 0 || m > 0)
//     {
//         if (e > 0 && b > 0 || m > 0)
//         {
//             ++KatryoshkaOne;
//             e--;
//             m--;
//             b--;
//                 }
//         else if (e >= 2 && b >= 1)
//         {
//             ++KatryoshkaTwo;
//             e -= 2;
//             b--;
//         }
//     }

//     // Print the number of Katryoshka objects created
//     final = KatryoshkaTwo + KatryoshkaOne;
//     printf("%lld\n", final);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int e, m, b, Katryoshka = 0, rest = 0, total = 0;

    // int e = 90, m = 24, b = 89, Katryoshka = 0, rest, total;

    scanf("%d %d %d", &e, &m, &b);
    // scanf("%lld %lld %lld", &e, &m, &b);

        while (e >= 1 && m >= 1 && b >= 1)
        {

            Katryoshka++;
            e--;
            m--;
            b--;
        }
    
   
        while (e >= 2 && b >= 1)
        {
            ++rest;
            e -= 2;
            b--;
        }
    

    total = Katryoshka + rest;
    printf("%d\n", total);
    return 0;
}
