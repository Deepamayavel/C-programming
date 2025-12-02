#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],cleaned[20];
    int i,j=0;
    printf("Enter a string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(isalnum(s[i]))
        {
            cleaned[j++]=tolower(s[i]);
        }
    }
    cleaned[j]='\0';
    int left=0,right=j-1;
    int isPalindrome=1;
    while(left<right)
    {
        if(cleaned[left]!=cleaned[right])
        {
            isPalindrome=0;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome)
    {
        printf("True- its a palindrome\n");
    }
    else
    {
        printf("False- its not a palindrome\n");
    }
    return 0;
}

