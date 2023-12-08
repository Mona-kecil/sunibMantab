#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int cup, price, totalConsumed = 0;
        scanf("%d %d", &cup, &price);

        totalConsumed = cup;
        while (cup >= price)
        {
            cup -= price;
            cup++;
            totalConsumed++;
        }

        printf("Case #%d: %d\n", i + 1, totalConsumed);
    }
    return 0;
}