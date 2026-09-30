#include <stdio.h>
#include <string.h>

int main()
{
    char strings[][20] = {
        "aba",
        "baba",
        "aba",
        "xzxb"
    };

    char queries[][20] = {
        "aba",
        "xzxb",
        "ab"
    };

    int n = 4;
    int q = 3;

    printf("Test Case 1: ");

    for (int i = 0; i < q; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (strcmp(queries[i], strings[j]) == 0)
            {
                count++;
            }
        }

        printf("%d ", count);
    }

    printf("\n");

    return 0;
}