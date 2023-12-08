#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int bottle, price, totalConsumed = 0;
        scanf("%d %d", &bottle, &price);

        totalConsumed = bottle;
        while (bottle >= price)
        {
            bottle -= price;
            bottle++;
            totalConsumed++;
        }

        printf("Case #%d: %d\n", i + 1, totalConsumed);
    }
    return 0;
}