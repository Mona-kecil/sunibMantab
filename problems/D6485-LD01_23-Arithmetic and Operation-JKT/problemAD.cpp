#include <stdio.h>

int main(int argc, char const *argv[])
{
    int physical_damage, magical_damage, pure_damage;
    scanf("%d %d %d", &physical_damage, &magical_damage, &pure_damage);

    double total_damage = 20 * (float)physical_damage / 100 + 30 * (float)magical_damage / 100 + 50 * (float)pure_damage / 100;
    printf("%.2f\n", total_damage);
    return 0;
}
