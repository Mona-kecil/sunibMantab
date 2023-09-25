#include <stdio.h>

int main()
{
    int money, price, total;
    scanf("%d %d", &money, &price);

    total = money / price;
    printf("%d\n", total);
    return 0;
}