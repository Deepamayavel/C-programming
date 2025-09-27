#include <stdio.h>
int main()
{
    int n, i;
    float sales[100];
    float total = 0, average;
    float maxSale, minSale;
    int maxID, minID;
    printf("Enter the no.of salespeople: ");
    scanf("%d", &n);
    if (n > 100 || n <= 0) {
        printf("Invalid number of salespeople (1–100 allowed).\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Enter sales for salesperson %d: ", i + 1); // ID = i+1
        scanf("%f", &sales[i]);
        total += sales[i];

        if (i == 0) {
            maxSale = minSale = sales[i];
            maxID = minID = 1;
        } else {
            if (sales[i] > maxSale) {
                maxSale = sales[i];
                maxID = i + 1;
            }
            if (sales[i] < minSale) {
                minSale = sales[i];
                minID = i + 1;
            }
        }
    }
    printf("\nSales Report:\n");
    printf("ID\tSales Amount\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%.2f\n", i + 1, sales[i]);
    }

    printf("\nTotal Sales = %.2f\n", total);
    average = total / n;
    printf("Average Sale = %.2f\n", average);
    printf("Salesperson %d had the highest sale with %.2f\n", maxID, maxSale);
    printf("Salesperson %d had the lowest sale with %.2f\n", minID, minSale);
    float threshold;
    int count = 0;
    printf("\nEnter a value to check who exceeded it: ");
    scanf("%f", &threshold);
    printf("\nSalespeople who exceeded %.2f:\n", threshold);
    for (i = 0; i < n; i++) {
        if (sales[i] > threshold) {
            printf("Salesperson %d: %.2f\n", i + 1, sales[i]);
            count++;
        }
    }
    printf("Total no.of salespeople who exceeded %.2f = %d\n", threshold, count);
    return 0;
}
