#include <stdio.h>
int main()
{
    int number;
    printf("Enter a three-digit positive integer: ");
    if (scanf("%d", &number) != 1 || number < 100 || number > 999)
    {
        printf("Invalid input.\n");
        return 1;
    }
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    int sum = hundreds + tens + units;
    int product = hundreds * tens * units;
    if (sum == product)
    {
        printf("The sum of the digits is equal to the product of the digits.\n");
    } else
    {
        printf("The sum of the digits is NOT equal to the product of the digits.\n");
    }

    return 0;
}

