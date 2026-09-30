#include <stdio.h>
#include <stdlib.h>

int* dynamicArray(int n, int queries_rows, int queries_columns,
                  int** queries, int* result_count)
{
    int** sequences = (int**)calloc(n, sizeof(int*));
    int* sizes = (int*)calloc(n, sizeof(int));

    int* answers = (int*)malloc(queries_rows * sizeof(int));
    int lastAnswer = 0;
    int answerIndex = 0;

    for (int i = 0; i < queries_rows; i++)
    {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        int index = (x ^ lastAnswer) % n;

        if (type == 1)
        {
            sizes[index]++;

            sequences[index] = (int*)realloc(
                sequences[index],
                sizes[index] * sizeof(int)
            );

            sequences[index][sizes[index] - 1] = y;
        }
        else if (type == 2)
        {
            int position = y % sizes[index];

            lastAnswer = sequences[index][position];

            answers[answerIndex] = lastAnswer;
            answerIndex++;
        }
    }

    *result_count = answerIndex;

    for (int i = 0; i < n; i++)
    {
        free(sequences[i]);
    }

    free(sequences);
    free(sizes);

    return answers;
}

int main()
{
    int n = 2;

    int q1[] = {1, 0, 5};
    int q2[] = {1, 1, 7};
    int q3[] = {1, 0, 3};
    int q4[] = {2, 1, 0};
    int q5[] = {2, 1, 1};

    int* queries[] = {q1, q2, q3, q4, q5};

    int result_count;

    int* result = dynamicArray(
        n,
        5,
        3,
        queries,
        &result_count
    );

    printf("Test Case 1: ");

    for (int i = 0; i < result_count; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    free(result);

    return 0;
}