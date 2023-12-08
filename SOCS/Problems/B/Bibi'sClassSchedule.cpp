#include <stdio.h>

int main()
{
    int hoursStart, minutesStart, hoursEnd, minutesEnd;
    char courseCode[11];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d:%d-%d:%d", courseCode, &hoursStart, &minutesStart, &hoursEnd, &minutesEnd);

        hoursStart -= 1;
        hoursEnd -= 1;

        printf("%s %02d:%02d-%02d:%02d\n", courseCode, hoursStart, minutesStart, hoursEnd, minutesEnd);
    }
    return 0;
}