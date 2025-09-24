#include<stdio.h>
#include<stdbool.h>
#define MAX 10000
bool checkDuplicatesWithinK(int arr[], int n, int k)
{
    int hash[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            return true;
        }
        hash[arr[i]] = 1;
        if (i >= k)
        {
            hash[arr[1-k]]=0;
        }
        return false;
    }
    int main()
    {
        int n, k, arr[100];
        printf("Enter number of elements: ");
        scanf("%d", &n);
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Enter value of k: ");
        scanf("%d", &k);
        if(checkDuplicatesWithinK(arr, n, k))
            printf("Array contains duplicates within distance %d.\n", k);
        else
            printf("Array does not contain duplicates within distance %d.\n", k);
        return 0;
     }
}
