#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != current || strs[j][i] == '\0')
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}
int main()
{
    // Test Case 1 - Typical case
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* strs1[] = {str1, str2, str3};
    int size1 = 3;

    char* result1 = longestCommonPrefix(strs1, size1);

    printf("Test Case 1: %s\n", result1);


    // Test Case 2 - Edge case: no common prefix
    char str4[] = "dog";
    char str5[] = "racecar";
    char str6[] = "car";

    char* strs2[] = {str4, str5, str6};
    int size2 = 3;

    char* result2 = longestCommonPrefix(strs2, size2);

    printf("Test Case 2: %s\n", result2);

    return 0;
}