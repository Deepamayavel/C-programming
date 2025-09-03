#include <stdio.h>
int main()
{
    int num,i,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d: ",num);
    for(i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            printf("%d", i);
            sum = sum + i;
        }
    }
    if(sum == num)
    {
        printf("\n%d is a Perfect Number\n",num);
    } else
    {
        printf("\n%d is Not a Perfect Number\n",num);
    }
    return 0;
}

