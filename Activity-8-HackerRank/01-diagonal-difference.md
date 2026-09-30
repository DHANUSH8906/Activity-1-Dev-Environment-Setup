# Diagonal Difference

## Problem
Given a square matrix, calculate the absolute difference between the sums of its primary and secondary diagonals.

## Approach
- Traverse the matrix once.
- Add `arr[i][i]` to the primary diagonal sum.
- Add `arr[i][n - 1 - i]` to the secondary diagonal sum.
- Return the absolute difference between the two sums.

## Example

Matrix:

11  2   4
4   5   6
10  8  -12

Primary diagonal:

11 + 5 + (-12) = 4

Secondary diagonal:

4 + 5 + 10 = 19

Difference:

|4 - 19| = 15

## Complexity

- Time: O(N)
- Space: O(1)

## HackerRank Result

Accepted.

![Accepted Result](01-result.png)