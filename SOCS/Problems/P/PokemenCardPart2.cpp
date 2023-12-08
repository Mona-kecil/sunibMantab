#include <stdio.h>

int main()
{
    int cardOwned, totalCard;
    scanf("%d %d", &cardOwned, &totalCard);

    double percentageOwned = cardOwned * 100.00 / totalCard;

    printf("%.2f%%\n", percentageOwned);
    return 0;
}