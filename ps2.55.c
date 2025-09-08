#include <stdio.h>;

int main() {
int number;
printf("Enter a three-digit positive integer: ");
if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 0;
    }
    if (number < 100 || number > 999)
        {
            printf("Invalid input.\n");
            return 0;
        }
int first_digit = number / 100;
int middle_digit = (number / 10) % 10;
int last_digit = number % 10;
if (first_digit + last_digit == middle_digit)
    {
        printf("Sum of first and last digits equals the middle digit.\n");
    }
else
    {
        printf("Sum of first and last digits does NOT equal the middle digit.\n");
    }

return 0;
}
