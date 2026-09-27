#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}
int main()
{
    // Test Case 1 - Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;

    int result1 = maxProfit(prices1, size1);

    printf("Test Case 1: %d\n", result1);


    // Test Case 2 - Edge case: prices only decrease
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;

    int result2 = maxProfit(prices2, size2);

    printf("Test Case 2: %d\n", result2);

    return 0;
}