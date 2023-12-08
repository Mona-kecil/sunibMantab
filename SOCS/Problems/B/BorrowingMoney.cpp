#include <stdio.h>

int main()
{
    int borrowedTimes;
    scanf("%d", &borrowedTimes);

    int borrowedAmount, sum = 0;
    for (int i = 0; i < borrowedTimes; i++)
    {
        scanf("%d", &borrowedAmount);
        sum += borrowedAmount;
    }

    printf("%d\n", sum);
    return 0;
}