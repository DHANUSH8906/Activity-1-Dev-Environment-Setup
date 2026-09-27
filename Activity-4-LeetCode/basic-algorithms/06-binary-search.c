#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
int main()
{
    // Test Case 1 - Typical case
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;

    int result1 = search(nums1, 6, target1);

    printf("Test Case 1: %d\n", result1);


    // Test Case 2 - Edge case: target not found
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;

    int result2 = search(nums2, 6, target2);

    printf("Test Case 2: %d\n", result2);

    return 0;
}