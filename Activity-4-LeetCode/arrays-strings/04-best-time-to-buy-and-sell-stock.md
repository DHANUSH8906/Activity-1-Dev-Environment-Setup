## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The solution keeps track of the lowest stock price seen so far while
iterating through the array. For each price, it calculates the possible
profit from selling at that price and keeps track of the maximum profit
found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold, so the solution only considers
prices that occur after the current minimum price. If the prices continuously
decrease, the maximum profit remains 0.
