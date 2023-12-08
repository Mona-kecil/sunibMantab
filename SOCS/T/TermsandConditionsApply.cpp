#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    double pricePerCup, cashbackPercentage, maximumCashback, cashback;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%lf %lf %lf", &pricePerCup, &cashbackPercentage, &maximumCashback);
        cashback = pricePerCup * cashbackPercentage / 100;

        if (cashback > maximumCashback)
        {
            cashback = maximumCashback;
        }

        printf("Case #%d: %.0lf\n", i + 1, cashback);
    }

    return 0;
}