#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, k, max = 0;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][50];
    int mask[n], len[n];

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
        mask[i] = 0;
        for (k = 0; words[i][k]; k++)
            mask[i] |= 1 << (words[i][k] - 'a');
        len[i] = k;
    }

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if ((mask[i] & mask[j]) == 0 && len[i] * len[j] > max)
                max = len[i] * len[j];

    printf("Maximum product: %d\n", max);
    return 0;
}

