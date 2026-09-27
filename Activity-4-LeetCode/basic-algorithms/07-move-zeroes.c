#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeros
    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

int main()
{
    // Test Case 1 - Typical case
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;

    moveZeroes(nums1, size1);

    printf("Test Case 1: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    // Test Case 2 - Edge case: all zeros
    int nums2[] = {0, 0, 0};
    int size2 = 3;

    moveZeroes(nums2, size2);

    printf("Test Case 2: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}