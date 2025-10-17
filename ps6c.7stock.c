#include <stdio.h>

int maxProfit(int prices[], int n)
{
    if (n == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
            minPrice = prices[i];
        else if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }

    return maxProfit;
}

int main()
{
    int n;
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }

    int profit = maxProfit(prices, n);
    printf("%d\n", profit);

    return 0;
}
