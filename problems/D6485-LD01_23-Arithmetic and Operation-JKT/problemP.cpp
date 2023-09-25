#include <stdio.h>

int main()
{
    int discount_percent[4], discounted_price[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &discount_percent[i], &discounted_price[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        double original_price = (double)discounted_price[i] / (1 - (double)discount_percent[i]/100);
        printf("$%.2lf\n", original_price);
    }

    return 0;
}
