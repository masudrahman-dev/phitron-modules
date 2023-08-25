// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n, m;
//     int a[n], b[m];
//     scanf("%s %s", a, b);
//     int val = strcmp(a, b);
//     printf("%d\n", val);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);
//     int i = 0;
//     while (1)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("same\n");
//         }
//         else if (a[i] == '\0')
//         {
//             printf("a small\n");
//         }
//         else if (b[i] == '\0')
//         {
//             printf("b small\n");
//         }

//         if (a[i] == b[i])
//         {
//             i++;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("a choto\n");
//             break;
//         }
//         else
//         {
//             printf("b choto\n");
//             break;
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);
    if (val < 0)
    {
        printf("%s", a);
    }
    else
    {
        printf("%s", b);
    }

    return 0;
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char X[21], Y[21];
//     scanf("%s %s", X, Y);
//     if(strcmp(X, Y) < 0) {
//         printf("%s", X);
//     } else {
//         printf("%s", Y);
//     }
//     return 0;
// }

// if (val < 0)
// {
//     printf("a is smaller");
// }
// else if (val > 0)
// {
//     printf("b is smaller");
// }
// else
// {
//     printf("same");
// }