#include <stdio.h>

int main() {
    int N;

    printf("Enter value of N :");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements :", N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long sum_act = 0, sum_sq_act = 0;
    long long sum_exp = (long long)N * (N + 1) / 2;
    long long sum_sq_exp = (long long)N * (N + 1) * (2 * N + 1) / 6;

    for (int i = 0; i < N; i++)
    {
        sum_act += arr[i];
        sum_sq_act += (long long)arr[i] * arr[i];
    }

    long long diff = sum_act - sum_exp;
    long long sq_diff = sum_sq_act - sum_sq_exp;

    long long sum_DM = sq_diff / diff;
    int D = (diff + sum_DM) / 2;

    printf("Duplicated number is: %d\n", D);
    int M = D - diff;
    printf("Missing number is: %d\n", M);

    return 0;
}
