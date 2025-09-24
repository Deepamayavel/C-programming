#include <stdio.h>

int main()
{
    int n, i;
    int largest, secondLargest;
    printf("Enter no.of elements: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (largest == secondLargest)
    {
        printf("There is no second largest value (all values may be the same).\n");
    }
    else
    {
        printf("The second largest value is: %d\n", secondLargest);
    }

    return 0;
}
