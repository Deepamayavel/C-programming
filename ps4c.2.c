#include <stdio.h>
#define MAX 100
void printToAndFro(int arr[MAX][MAX], int m, int n) {
    printf("To-and-fro row-major order:\n");
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++)
                printf("%d ", arr[i][j]);
        } else {
            for (int j = n - 1; j >= 0; j--)
                printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

void printDiagonalMajor(int arr[MAX][MAX], int m, int n) {
    printf("Diagonal-major order:\n");

    int totalDiagonals = m + n - 1;

    for (int d = 0; d < totalDiagonals; d++) {
        for (int i = 0; i < m; i++) {
            int j = d - i;
            if (j >= 0 && j < n) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

void printSpiral(int arr[MAX][MAX], int m, int n) {
    printf("Spiral order:\n");

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++)
            printf("%d ", arr[top][j]);
        top++;

        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                printf("%d ", arr[bottom][j]);
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }
    printf("\n");
}

int main() {
    int arr[MAX][MAX];
    int m, n;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements (%d total):\n", m * n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printToAndFro(arr, m, n);
    printDiagonalMajor(arr, m, n);
    printSpiral(arr, m, n);

    return 0;
}
