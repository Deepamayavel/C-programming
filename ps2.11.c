#include <stdio.h>
int main()
{
    int number;
    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    int lastDigit = number % 10;
    int firstDigit = number;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    if (firstDigit % lastDigit == 0)
    {
        printf("First digit is a multiple of the last digit.\n");
    } else if (lastDigit % firstDigit == 0)
    {
        printf("Last digit is a multiple of the first digit.\n");
    } else
    {
        printf("Neither digit is a multiple of the other.\n");
    }

    return 0;
}

