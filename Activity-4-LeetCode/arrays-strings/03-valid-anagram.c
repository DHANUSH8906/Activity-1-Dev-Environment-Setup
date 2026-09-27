#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t)
{
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    // Test Case 1 - Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    if (isAnagram(s1, t1))
        printf("Test Case 1: true\n");
    else
        printf("Test Case 1: false\n");


    // Test Case 2 - Edge case: different character counts
    char s2[] = "rat";
    char t2[] = "car";

    if (isAnagram(s2, t2))
        printf("Test Case 2: true\n");
    else
        printf("Test Case 2: false\n");

    return 0;
}