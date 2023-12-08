#include <stdio.h>

int main()
{
    int physicalDamage, magicalDamage, pureDamage;
    scanf("%d %d %d", &physicalDamage, &magicalDamage, &pureDamage);

    double totalDamage = 20 * (float)physicalDamage / 100 + 30 * (float)magicalDamage / 100 + 50 * (float)pureDamage / 100;

    printf("%.2f\n", totalDamage);
    return 0;
}