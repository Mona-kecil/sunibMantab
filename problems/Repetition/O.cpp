#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int plates, capacity, portion, variablePortion;
        scanf("%d %d %d", &plates, &capacity, &portion);
        getchar();

        for (int j = 0; j < plates; j++) {
            scanf("%d", &variablePortion);
            getchar();
            if (variablePortion >= portion && variablePortion <= capacity) {
                portion = variablePortion;
            }
        }
        printf("Case #%d: %d\n", i, portion);
    }


    return 0;
}