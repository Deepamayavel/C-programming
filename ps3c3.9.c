#include<stdio.h>
int main()
{
    int n1, n2, i, j, k;
    int arr1[100], arr2[100], merged[200];
    printf("Enter no.of elements in first sorted array:");
    scanf("%d", &n1);
    printf("Enter %d elements in sorted order:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter no.of elements in second sorted array: ");
    scanf("%d", &n2);
    printf("Enter %d elements in sorted order:\n", n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0; j = 0; k = 0;
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while(i < n1)
    {
        merged[k++] = arr1[i++];
    }
    while(j < n2)
    {
        merged[k++] = arr2[j++];
    }
    printf("Merged sorted array:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d", merged[i]);
    }
    printf("\n");
    return 0;
}
