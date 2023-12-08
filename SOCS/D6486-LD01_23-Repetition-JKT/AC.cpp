#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int types, money, price;
        int bought = 0;
        int cheapest = 1000001;
        scanf("%d %d", &types, &money);
        getchar();

        for (int i = 0; i < types; i++) {
            scanf("%d", &price);
            getchar();
            if (price < cheapest) cheapest = price;
        }
        bought = money / cheapest;
        printf("Case #%d: %d\n", i, bought);
    }


    return 0;
}