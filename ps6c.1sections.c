#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
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
    int size1, size2, size3;

    printf("Enter no.of items in Section 1: ");
    scanf("%d", &size1);
    int section1[size1];
    printf("Enter %d ID for Section 1:", size1);
    for(int i = 0; i < size1; i++) {
        scanf("%d", &section1[i]);
    }
    printf("Enter number of items in Section 2: ");
    scanf("%d", &size2);
    int section2[size2];
    printf("Enter %d ID for Section 2:", size2);
    for(int i = 0; i < size2; i++) {
        scanf("%d", &section2[i]);
    }

    printf("Enter number of items in Section 3: ");
    scanf("%d", &size3);
    int section3[size3];
    printf("Enter %d ID for Section 3:", size3);
    for(int i = 0; i < size3; i++) {
        scanf("%d", &section3[i]);
    }

    int total_size = size1 + size2 + size3;
    int all_items[total_size];
    int index = 0;

    // Merge all sections
    for(int i = 0; i < size1; i++) {
        all_items[index++] = section1[i];
    }
    for(int i = 0; i < size2; i++) {
        all_items[index++] = section2[i];
    }
    for(int i = 0; i < size3; i++) {
        all_items[index++] = section3[i];
    }

    // Remove duplicates
    int new_size = total_size;
    for(int i = 0; i < new_size; i++) {
        for(int j = i + 1; j < new_size; j++) {
            if(all_items[i] == all_items[j]) {
                for(int k = j; k < new_size - 1; k++) {
                    all_items[k] = all_items[k + 1];
                }
                new_size--;
                j--;
            }
        }
    }

    // Sort the array
    bubbleSort(all_items, new_size);

    // Print the result
    printf("Consolidated, sorted list without duplicates:\n[");
    for(int i = 0; i < new_size; i++) {
        printf("%d", all_items[i]);
        if(i < new_size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

