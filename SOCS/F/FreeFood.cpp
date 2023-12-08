#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int menu, price, totalPrice = 0, money;
        scanf("%d %d", &menu, &money);

        for (int j = 0; j < menu; j++)
        {
            scanf("%d", &price);
            totalPrice += price;
        }

        if (money >= totalPrice)
            printf("Case #%d: No worries\n", i + 1);
        else
            printf("Case #%d: Wash dishes\n", i + 1);
    }
    return 0;
}