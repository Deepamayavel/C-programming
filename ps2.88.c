#include <stdio.h>
int main()
{
    int n;
    printf("Enter an odd number for size of magic square: ");
    scanf("%d", &n);
    if (n <= 0 || n % 2 == 0)
    {
        printf("Invalid input. Please enter a positive odd number.\n");
        return 1;
    }
    int magic[n][n];
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            magic[i][j] = 0;
    i = 0;
    j = n / 2;

    for (int num = 1; num <= n * n; num++)
    {
        magic[i][j] = num;
        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;
        if (magic[newi][newj] != 0)
        {
            i = (i + 1) % n;
        } else {
            i = newi;
            j = newj;
        }
    }
    printf("\nMagic Square of size %d:\n", n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
         {
            printf("%4d", magic[i][j]);
        }
        printf("\n");
    }

    return 0;
}
