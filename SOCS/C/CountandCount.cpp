#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int numRange;
        scanf("%d", &numRange);

        printf("Case #%d:\n", i + 1);
        for (int j = 1; j <= numRange; j++)
        {
            if ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0)
                printf("%d Jojo\n", j);
            else
                printf("%d Lili\n", j);
        }
    }
    return 0;
}