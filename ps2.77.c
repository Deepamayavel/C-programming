#include <stdio.h>
int main()
{
    int X, n;
    int i, term = 0, sum = 0;
    printf("Enter a digit X (0-9): ");
    scanf("%d", &X);

    printf("Enter the number of terms n: ");
    scanf("%d", &n);
    if (X < 0 || X > 9 || n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }
    for (i = 1; i <= n; i++)
    {
        term = term * 10 + X;
        sum += term;
    }
    printf("Sum of the series = %d\n", sum);
    return 0;
}
