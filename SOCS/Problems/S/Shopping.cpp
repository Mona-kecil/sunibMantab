#include <stdio.h>

int main()
{
    int discountPercentage, discountedPrice;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &discountPercentage, &discountedPrice);

        double originalPrice = (double)discountedPrice / (1 - (double)discountPercentage/100);
        
        printf("$%.2f\n", originalPrice);
    }
    return 0;
}