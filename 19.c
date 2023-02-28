#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter number of columns in the matrix: ");
    scanf("%d", &m);
    int A[n][m], B[n][m], C[n][m];

    printf("Enter the values of first matrix (%dX%d)\n", n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the values of second matrix (%dX%d)\n", n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Adition of the given two matrix and matrix C:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}