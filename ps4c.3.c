#include <stdio.h>

int searchElement(int arr[], int n, int x) {
    int i = 0;
    while (i < n) {
        if (arr[i] == x)
            return i;
        int diff = arr[i] - x;
        if (diff < 0) diff = -diff;
        i += diff;
    }
    return -1;
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    int pos = searchElement(arr, n, x);
    if (pos != -1)
        printf("Element %d found at position %d\n", x, pos + 1);
    else
        printf("Element %d not found\n", x);

    return 0;
}
