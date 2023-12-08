#include <stdio.h>

int main()
{
    int bibiAttack, dragonAttack;
    scanf("%d %d", &bibiAttack, &dragonAttack);

    int bibi, bibiHighestAttack = -1;
    for (int i = 0; i < bibiAttack; i++)
    {
        scanf("%d", &bibi);
        if (bibi > bibiHighestAttack)
            bibiHighestAttack = bibi;
    }

    int dragon, dragonHighestAttack = -1;
    for (int i = 0; i < dragonAttack; i++)
    {
        scanf("%d", &dragon);
        if (dragon > dragonHighestAttack)
            dragonHighestAttack = dragon;
    }

    if (bibiHighestAttack > dragonHighestAttack)
        printf("The dark secret was true\n");
    else
        printf("Secret debunked\n");
    return 0;
}