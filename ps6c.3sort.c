#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n -1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter no.of grades: ");
    scanf("%d", &n);

    int grades[n];
    printf("Enter %d grades:", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    // Calculate average
    int sum = 0;
    int highest = grades[0];
    for(int i = 0; i < n; i++) {
        sum += grades[i];
        if(grades[i] > highest) {
            highest = grades[i];
        }
    }
    float average = (float)sum / n;

    // Sort grades
    bubbleSort(grades, n);

    // Print results
    printf("Average Grade: %.1f\n", average);
    printf("Highest Grade: %d\n", highest);
    printf("Sorted Grades: [");
    for(int i = 0; i < n; i++) {
        printf("%d", grades[i]);
        if(i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

