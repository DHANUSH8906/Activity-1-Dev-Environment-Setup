#include <stdio.h>

void compareTriplets(int a[3], int b[3], int result[2])
{
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            result[0]++;
        }
        else if (a[i] < b[i])
        {
            result[1]++;
        }
    }
}

int main()
{
    int a[] = {5, 6, 7};
    int b[] = {3, 6, 10};

    int result[2];

    compareTriplets(a, b, result);

    printf("Test Case 1: %d %d\n", result[0], result[1]);

    return 0;
}