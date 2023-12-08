#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int upperRange, totalPancakes = 1;
        scanf("%d", &upperRange);

        printf("Case %d: ", i + 1);
        for (int j = 0; j < upperRange; j++)
        {
            totalPancakes += j;

            if (j != upperRange - 1)
                printf("%d ", totalPancakes);
            else
                printf("%d\n", totalPancakes);
        }
    }
    return 0;
}