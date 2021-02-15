#include <stdio.h>

void transpose()
{
    int rows, cols;
    int mat[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("Enter number of columns : ");
    scanf("%d", &cols);

    printf("\nEnter the elements of matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    int transpose_matrix[rows][cols];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose_matrix[j][i] = mat[i][j];
        }
    }

    printf("\nTranspose matrix\n");

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d\t", transpose_matrix[i][j]);
        }
        printf("\n");
    }

    return;
}
