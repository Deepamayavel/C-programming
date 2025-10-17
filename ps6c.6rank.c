#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int rank[n];
    for (int i = 0; i < n; i++) {
        int r = 1;
        for (int j = 0; j < n; j++) {
            if (arr[j] < arr[i])
                r++;
        }
        rank[i] = r;
    }

    printf("Array after replacing elements with their rank:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rank[i]);
    }

    return 0;
}
