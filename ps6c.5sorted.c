#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the no.of players :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the scores: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int top = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>top)
            top=arr[i];

    }

    int threshold;
    printf("enter the threshold value: ");
    scanf("%d",&threshold);
    int count = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>threshold)
            count++;
    }
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\ntop scorers score : %d",top);
    printf("\nno.of players above %d: %d",threshold,count);

    printf("\nsorted scores:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
