#include <stdio.h>

void reverseString(char* s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    // Test Case 1 - Typical case
    char s1[] = "hello";
    int size1 = 5;

    reverseString(s1, size1);

    printf("Test Case 1: %s\n", s1);


    // Test Case 2 - Edge case: single character
    char s2[] = "a";
    int size2 = 1;

    reverseString(s2, size2);

    printf("Test Case 2: %s\n", s2);

    return 0;
}