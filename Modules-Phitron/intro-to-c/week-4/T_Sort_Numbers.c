// // #include <stdio.h>

// // int main()
// // {
// //     int a, b, c;
// //     scanf("%d%d%d", &a, &b, &c);

// //     // Sort the numbers in ascending order using if-else statements
// //     if (a <= b && a <= c)
// //     {
// //         printf("%d\n", a);
// //         if (b <= c)
// //         {
// //             printf("%d\n%d\n%d\n", b, c, a);
// //         }
// //         else
// //         {
// //             printf("%d\n%d\n%d\n", c, b, a);
// //         }
// //     }
// //     else if (b <= a && b <= c)
// //     {
// //         printf("%d\n", b);
// //         if (a <= c)
// //         {
// //             printf("%d\n%d\n%d\n", a, c, b);
// //         }
// //         else
// //         {
// //             printf("%d\n%d\n%d\n", c, a, b);
// //         }
// //     }
// //     else
// //     {
// //         printf("%d\n", c);
// //         if (a <= b)
// //         {
// //             printf("%d\n%d\n%d\n", a, b, c);
// //         }
// //         else
// //         {
// //             printf("%d\n%d\n%d\n", b, a, c);
// //         }
// //     }

// //     return 0;
// // }

// // #include <stdio.h>

// // int main()
// // {
// //     int x, y, z;
// //     int a, b, c;
// //     x = a;
// //     y = b;
// //     z = c;
// //     scanf("%d %d %d", &a, &b, &c);

// //     int temp;
// //     if (a > b)
// //     {
// //         temp = a;
// //         a = b;
// //         b = temp;
// //     }

// //     if (a > c)
// //     {
// //         temp = a;
// //         a = c;
// //         c = temp;
// //     }

// //     if (b > c)
// //     {
// //         temp = b;
// //         b = c;
// //         c = temp;
// //     }

// //     printf("%d\n%d\n%d", a, b, c);
// //     printf("\n");
// //     printf("%d\n%d\n%d", x, y, z);

// //     return 0;
// // }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int x, y, z;
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     // small
//     // a
//     if (a != b && a != c)
//     {
//         if (a < b && a < c)
//         {

//             x = a;
//         }
//     }
//     else
//     {
//         x = a;
//     }
//     // b
//     if (b != a && b != c)
//     {
//         if (b < a && b < c)
//         {

//             x = b;
//         }
//     }
//     else
//     {
//         x = b;
//     }
//     // c
//     if (c != a && c != b)
//     {
//         if (c < a && c < b)
//         {

//             x = c;
//         }
//     }
//     else
//     {
//         x = c;
//     }
//     // printf("%d\n", x);
//     // capital
//     if (a > b && a > c)
//     {

//         z = a;
//     }
//     else if (a < b && b > c)
//     {

//         z = b;
//     }
//     else
//     {

//         z = c;
//     }
//     // middle
//     if (a >= x && a <= z)
//     {

//         y = a;
//     }
//     else if (b >= x && b <= z)
//     {

//         y = b;
//     }
//     else
//     {

//         y = c;
//     }

//     printf("%d\n%d\n%d\n", x, y, z);
//     printf("\n");
//     printf("%d\n%d\n%d\n", a, b, c);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     int x, y, z;
//     printf("Input 3 integers: ");
//     scanf("%d %d %d", &x, &y, &z);
//     printf("\n---------------------------\n");
//     printf("Original numbers: %d, %d, %d", x, y, z);
//     printf("\nSorted numbers: ");
//     if (x <= y && y <= z)
//     {
//         printf("%d, %d, %d", x, y, z);
//     }
//     else
//     {

//         if (x <= z && z <= y)
//         {
//             printf("%d, %d, %d", x, z, y);
//         }
//         else
//         {

//             if (y <= x && x <= z)
//             {
//                 printf("%d, %d, %d", y, x, z);
//             }
//             else
//             {

//                 if (y <= z && z <= x)
//                 {
//                     printf("%d, %d, %d", y, z, x);
//                 }
//                 else
//                 {

//                     if (z <= x && x <= y)
//                     {
//                         printf("%d, %d, %d", z, x, y);
//                     }
//                     else
//                     {
//                         if (x == y && y == z)
//                         {
//                             printf("%d, %d, %d", x, y, z);
//                         }
//                         else
//                         {
//                             printf("%d, %d, %d", z, y, x);
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

#include <stdio.h>

int main()
{
    int a, b, c, temp;
    int v[3];

    scanf("%d %d %d", &a, &b, &c);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i] < v[j])
            {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}
