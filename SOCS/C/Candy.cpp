#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    int candyTypes, availableMoney;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &candyTypes, &availableMoney);

        int candyPrice, cheapestCandy = 1000001;
        for (int j = 0; j < candyTypes; j++)
        {
            scanf("%d", &candyPrice);
        
            if (candyPrice < cheapestCandy)
                cheapestCandy = candyPrice;
        }

        int candyBought = availableMoney / cheapestCandy;
        printf("Case #%d: %d\n", i + 1, candyBought);
    }
    return 0;
}