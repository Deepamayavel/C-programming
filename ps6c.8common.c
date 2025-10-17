#include <stdio.h>

#define MAX 100

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int findMostCommon(int arr[], int n)
{
    int maxCount = 0;
    int mostCommon = arr[0];
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount || (count == maxCount && arr[i] < mostCommon)) {
            maxCount = count;
            mostCommon = arr[i];
        }
    }

    return mostCommon;
}

void printMissingValues(int arr[], int n)
{
    int min = arr[0];
    int max = arr[n-1];
    printf("Missing Values: ");
    for (int i = min; i <= max; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int sumOfUnique(int arr[], int n) {
    int sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[MAX], n;

    printf("Enter no.of artifacts: ");
    scanf("%d", &n);

    printf("Enter artifact values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    bubbleSort(arr, n);


    printf("Sorted Artifacts: {");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("}\n");

    int mostCommon = findMostCommon(arr, n);
    printf("Most Common Artifact: %d\n", mostCommon);


    printMissingValues(arr, n);

    int sum = sumOfUnique(arr, n);
    printf("Sum of Unique Artifacts: %d\n", sum);

    return 0;
}

