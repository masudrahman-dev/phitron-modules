// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a, b, c, root1, root2, imaginary, discriminant;

//     printf("Enter coefficients a, b, and c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     discriminant = b * b - 4 * a * c;

//     if (discriminant > 0)
//     {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);

//         printf("The roots are real and distinct.\n");
//         printf("Root 1 = %.2f\n", root1);
//         printf("Root 2 = %.2f\n", root2);
//     }
//     else if (discriminant == 0)
//     {
//         root1 = root2 = -b / (2 * a);

//         printf("The roots are real and equal.\n");
//         printf("Root 1 = Root 2 = %.2f\n", root1);
//     }
//     else
//     {
//         root1 = -b / (2 * a);
//         imaginary = sqrt(-discriminant) / (2 * a);

//         printf("The roots are complex and conjugate.\n");
//         printf("Root 1 = %.2f + %.2fi\n", root1, imaginary);
//         printf("Root 2 = %.2f - %.2fi\n", root1, imaginary);
//     }

//     return 0;
// }

// program's
// #include <math.h>
// #include <stdio.h>
// int main()
// {
//     double a, b, c, discriminant, root1, root2, realPart, imagPart;
//     printf("Enter coefficients a, b and c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     discriminant = b * b - 4 * a * c;

//     // condition for real and different roots
//     if (discriminant > 0)
//     {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
//     }

//     // condition for real and equal roots
//     else if (discriminant == 0)
//     {
//         root1 = root2 = -b / (2 * a);
//         printf("root1 = root2 = %.2lf;", root1);
//     }

//     // if roots are not real
//     else
//     {
//         realPart = -b / (2 * a);
//         imagPart = sqrt(-discriminant) / (2 * a);
//         printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a, b, c, root1, root2, d, realPart, imagPart;

//     printf("enter coefficients a,b,c : \n");
//     scanf("%lf %lf %lf", &a, &b, &c);
//     d = b * b - 4 * a * c;
//     // condition for real and different roots
//     if (d > 0)
//     {
//         root1 = -b + sqrt(b * b - 4 * a * c) / 2 * a;
//         root2 = -b + sqrt(b * b - 4 * a * c) / 2 * a;
//         printf("root1 = %0.2f and root2 = %0.2f\n", root1, root2);
//     }
//     // condition for real and roots
//     else if (d == 0)
//     {
//         root1 = root2 = -b / 2 * a;
//         printf("root1 = root2 = %.2f\n", root1);
//     }
//     // if roots are not real
//     else
//     {
//         realPart = -b / (2 * a);
//         imagPart = sqrt(-d) / (2 * a);
//         printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, root1, root2, imaginary, discriminant;
    printf("Enter coefficients a,b and c: \n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 %.2f\n", root1);
    }
    else
    {
        root1 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and conjugate\n");
        printf("Root 1 = %.2f + %.2fi\n", root1, imaginary);
        printf("Root 2 = %.2f + %.2fi\n", root1, imaginary);
    }

    return 0;
}
