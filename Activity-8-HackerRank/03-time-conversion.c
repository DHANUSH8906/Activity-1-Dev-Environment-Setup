#include <stdio.h>
#include <string.h>

void timeConversion(char* s)
{
    int hour;

    sscanf(s, "%2d", &hour);

    if (s[8] == 'A')
    {
        if (hour == 12)
        {
            s[0] = '0';
            s[1] = '0';
        }
    }
    else
    {
        if (hour != 12)
        {
            hour += 12;
            s[0] = (hour / 10) + '0';
            s[1] = (hour % 10) + '0';
        }
    }

    s[8] = '\0';
}

int main()
{
    char time[] = "07:05:45PM";

    timeConversion(time);

    printf("Test Case 1: %s\n", time);

    return 0;
}