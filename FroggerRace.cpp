#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int finishLine, pos = 0, jump = 1, totalJump = 0;
        scanf("%d", &finishLine);

        while (pos < finishLine)
        {
            pos += jump;
            jump++;
            totalJump++;
        }

        printf("Case #%d: %d\n", i + 1, totalJump);
    }
    return 0;
}