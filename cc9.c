#include <stdio.h>
int isPalindrome(int n)
{
    int rev=0,original= n,digit;
    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (original == rev)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num++; // Check from the next number
    while (!isPalindrome(num))
    {
        num++;
    }
    printf("Next smallest palindrome is: %d\n", num);
    return 0;
}
