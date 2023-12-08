#include <stdio.h>

int main()
{
    int initialPrice, currentPrice;
    scanf("%d %d", &initialPrice, &currentPrice);

    double discountPercentage = (float)(initialPrice - currentPrice) / (float)initialPrice * 100;

    printf("%.2f%%\n", 100 - discountPercentage);
    return 0;
}