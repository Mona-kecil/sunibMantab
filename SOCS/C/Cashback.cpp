#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int gojoPercentage, bipayPercentage;
        scanf("%d %d", &gojoPercentage, &bipayPercentage);

        if (gojoPercentage > bipayPercentage)
        {
            printf("Case #%d: Go-Jo\n", i+1);
        }
        else
        {
            printf("Case #%d: Bi-Pay\n", i+1);
        }
    }
    return 0;
}