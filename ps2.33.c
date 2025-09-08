#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += i * (n - i + 1);
    }
    printf("The sum is: %d\n", sum);

    return 0;
}

