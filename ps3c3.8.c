#include<stdio.h>
int main()
{
    int n, key, i, j, temp;
    int arr[100];
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key value: ");
    scanf("%d", &key);
    key = key % n;
    for(i = 0; i < key; i++)
    {
        temp = arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("rotated array:");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
