#include <stdio.h>

int main()
{
    int row1, col1, row2, col2, i, j, k, matrix1[100][100], matrix2[100][100], product[100][100];

    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &col1);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &col2);

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (col1 != row2)
    {
        printf("Error: The matrices cannot be multiplied.\n");
        return 0;
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            product[i][j] = 0;
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < row2; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the matrices is:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
