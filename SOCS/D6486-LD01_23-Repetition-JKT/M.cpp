#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int friendCount, money, price;
        int totalCost = 0;
        scanf("%d %d", &friendCount, &money);
        getchar();

        for (int j = 0; j < friendCount; j++) {
            scanf("%d", &price);
            getchar();
            totalCost += price;
        }

        if (money < totalCost) {
            printf("Case #%d: Wash dishes\n", i);
        } else {
            printf("Case #%d: No worries\n", i);
        }
    } 


    return 0;
}