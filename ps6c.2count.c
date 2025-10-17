#include<stdio.h>
int main()
{
    int n,i,G;
    printf("enter no.of days:");
    scanf("%d",&n);
    int days[30];
    printf("Days:");
    for(i=0;i<n;i++)
        scanf("%d",&days[i]);
    printf("Gift type to find:");
    scanf("%d",&G);
    int count=0;
    printf("Days with Gift Type:");
    for(i=0;i<n;i++)
    {
        if(days[i] == G)
        {
            count++;
            printf("%d\t",G);
        }
    }
    printf("\nOcurrences: %d ",count);
    return 0;
}
