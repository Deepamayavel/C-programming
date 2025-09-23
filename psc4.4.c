#include <stdio.h>

int maxAvgSub(int a[], int n, int k, double *avg) {
    int sum = 0, maxSum, start = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    maxSum = sum;

    for (int i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        if (sum > maxSum) {
            maxSum = sum;
            start = i - k + 1;
        }
    }

    *avg = (double)maxSum / k;
    return start;
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter subarray length k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray length.\n");
        return 1;
    }

    double avg;
    int idx = maxAvgSub(a, n, k, &avg);

    printf("Max average subarray length %d starts at index %d.\n", k, idx);
    printf("Max average is %.2lf\n", avg);

    return 0;
}
