#include <stdio.h>

int main()
{
    int hours_start[5], minutes_start[5], hours_end[5], minutes_end[5];
    char course_code[5][11];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d:%d-%d:%d", course_code[i], &hours_start[i], &minutes_start[i], &hours_end[i], &minutes_end[i]);
    }

    // Convert from gmt+8 to gmt+7
    for (int i = 0; i < 5; i++)
    {
        hours_start[i] -= 1;
        hours_end[i] -= 1;
    }

    // Printing out the result
    for (int i = 0; i < 5; i++)
    {
        printf("%s %02d:%02d-%02d:%02d\n", course_code[i], hours_start[i], minutes_start[i], hours_end[i], minutes_end[i]);
    }
}

/*
MATH6025 08:20-10:00
MATH6025 10:20-12:00
COMP6047 16:20-18:00
COMP6047 18:20-20:00
CHAR6013 08:20-10:00
*/