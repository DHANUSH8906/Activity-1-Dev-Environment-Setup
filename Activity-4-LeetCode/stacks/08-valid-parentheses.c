#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{')
        {
            stack[++top] = current;
        }
        else
        {
            if (top == -1)
                return false;

            char opening = stack[top--];

            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{'))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1 - Typical case
    char s1[] = "()[]{}";

    if (isValid(s1))
        printf("Test Case 1: true\n");
    else
        printf("Test Case 1: false\n");

    // Test Case 2 - Edge case: mismatched brackets
    char s2[] = "(]";

    if (isValid(s2))
        printf("Test Case 2: true\n");
    else
        printf("Test Case 2: false\n");

    return 0;
}