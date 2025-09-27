#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    int A[20][20],B[20][20],C[20][20];
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = (A[i][j] + A[j][i]) / 2;
            C[i][j]=(A[i][j]-A[i][j])/2;
        }
    }
    printf("\nSymmetric Matrix B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }
    printf("\nSkew-Symmetric Matrix C:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }
    printf("\nVerification (B + C):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", B[i][j] + C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
