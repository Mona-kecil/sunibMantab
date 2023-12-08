#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int students, score, max = -1, presents = 0;
        scanf("%d", &students);

        for (int j = 0; j < students; j++)
        {
            scanf("%d", &score);
            if (score == max)
                presents++;
            
            if (score > max)
            {
                presents = 1;
                max = score;
            }
        }

        printf("Case #%d: %d\n", i + 1, presents);
    }
    return 0;
}