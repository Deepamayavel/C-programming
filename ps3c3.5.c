#include<stdio.h>
int main()
{
    int n,i,j,dp=0;
    printf("Enter no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                dp=1;
                break;
            }
        }
        if(dp)
        {
           break;
        }
    }
        if(dp)
        {
            printf("Duplicate found in array.\n");
        }
        else
        {
            printf("No duplicate found.\n");
        }
    return 0;
}
