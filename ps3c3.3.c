#include <stdio.h>

int main() {
    int n, i, searchNum;
    int found = 0;
    printf("Enter no.of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &searchNum);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == searchNum)
        {
            printf("Number %d found at position %d\n", searchNum, i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", searchNum);
    }

    return 0;
}

