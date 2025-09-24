#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter no.of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d number:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAscending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nDescending order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

