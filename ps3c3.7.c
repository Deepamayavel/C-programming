#include<stdio.h>

int main()
{
    int n, k, i;
    int arr[100];
    int freq[1000] = {0};
    printf("Enter no.of elements: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }
    printf("Elements appear more than n/k times:");
    for(i = 0; i < 1000; i++)
    {
        if(freq[i] > n/k)
        {
            printf("%d (appears %d times)\n", i, freq[i]);
        }
    }
    return 0;
}
