#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < arr_rows; i++)
    {
        primary += arr[i][i];
        secondary += arr[i][arr_columns - 1 - i];
    }

    return abs(primary - secondary);
}

int main()
{
    int n = 3;

    int row1[] = {11, 2, 4};
    int row2[] = {4, 5, 6};
    int row3[] = {10, 8, -12};

    int* arr[] = {row1, row2, row3};

    int result = diagonalDifference(n, n, arr);

    printf("Test Case 1: %d\n", result);

    return 0;
}